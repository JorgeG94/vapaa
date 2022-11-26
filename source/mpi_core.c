#include <stdio.h>
#include <stdlib.h> // NULL
#include <mpi.h>
#include "ISO_Fortran_binding.h"
#include "mpi_handle_conversions.h"

// We assume MPI_Fint is C int. This is verified during initialization.

void * f08_mpi_in_place_address = {0};
void * f08_mpi_bottom_address = {0};

#ifdef HAVE_CFI
void C_MPI_IN_PLACE(CFI_cdesc_t * desc)
{
    void * addr = desc->base_addr;
    f08_mpi_in_place_address = addr;
}
#else
void C_MPI_IN_PLACE(void * class)
{
    f08_mpi_in_place_address = class;
}
#endif

#ifdef HAVE_CFI
void C_MPI_BOTTOM(CFI_cdesc_t * desc)
{
    void * addr = desc->base_addr;
    f08_mpi_bottom_address = addr;
}
#else
void C_MPI_BOTTOM(void * class)
{
    f08_mpi_bottom_address = class;
}
#endif

// STANDARD STUFF

void C_MPI_Init(int * ierror)
{
    *ierror = MPI_Init(NULL, NULL);
    if (sizeof(MPI_Fint) != sizeof(int)) {
        fprintf(stderr, "MPI_Fint is wider than C int, which violates our design assumptions.\n");
    }
}

void C_MPI_Finalize(int * ierror)
{
    *ierror = MPI_Finalize();
}

void C_MPI_Init_thread(int * required_f, int * provided_f, int * ierror)
{
    int required = -1, provided = -1;

    // We use the same values as MPICH but cannot be sure every MPI will,
    // so we convert them here.  See mpi_global_constants.F90 for our values.

    if (*required_f == 0) {
       required = MPI_THREAD_SINGLE; 
    } else if (*required_f == 1) {
       required = MPI_THREAD_FUNNELED; 
    } else if (*required_f == 2) {
       required = MPI_THREAD_SERIALIZED; 
    } else if (*required_f == 3) {
       required = MPI_THREAD_MULTIPLE;
    }
        
    *ierror = MPI_Init_thread(NULL, NULL, required, &provided);

    if (provided == MPI_THREAD_SINGLE) {
       *provided_f = 0; 
    } else if (provided == MPI_THREAD_FUNNELED) {
       *provided_f = 1; 
    } else if (provided == MPI_THREAD_SERIALIZED) {
       *provided_f = 2; 
    } else if (provided == MPI_THREAD_MULTIPLE) {
       *provided_f = 3;
    }

    if (sizeof(MPI_Fint) != sizeof(int)) {
        fprintf(stderr, "MPI_Fint is wider than C int, which violates our design assumptions.\n");
    }
}

void C_MPI_Initialized(int * flag, int * ierror)
{
    *ierror = MPI_Initialized(flag);
}

void C_MPI_Finalized(int * flag, int * ierror)
{
    *ierror = MPI_Finalized(flag);
}

void C_MPI_Query_thread(int * provided_f, int * ierror)
{
    int provided = -1;
    *ierror = MPI_Query_thread(&provided);

    // We use the same values as MPICH but cannot be sure every MPI will,
    // so we convert them here.  See mpi_global_constants.F90 for our values.

    if (provided == MPI_THREAD_SINGLE) {
       *provided_f = 0;
    } else if (provided == MPI_THREAD_FUNNELED) {
       *provided_f = 1;
    } else if (provided == MPI_THREAD_SERIALIZED) {
       *provided_f = 2;
    } else if (provided == MPI_THREAD_MULTIPLE) {
       *provided_f = 3;
    }
}

void C_MPI_Abort(int * comm_f, int * errorcode, int * ierror)
{
    MPI_Comm comm = C_MPI_COMM_F2C(*comm_f);
    *ierror = MPI_Abort(comm, *errorcode);
}

void C_MPI_Get_version(int * version, int * subversion, int * ierror)
{
    *ierror = MPI_Get_version(version, subversion);
}

//void C_MPI_Get_library_version(char * version, int * resultlen, int * ierror)
void C_MPI_Get_library_version(CFI_cdesc_t * version_d, int * resultlen, int * ierror)
{
    char * version = version_d -> base_addr;
    *ierror = MPI_Get_library_version(version, resultlen);
}

double C_MPI_Wtime(void)
{
    return MPI_Wtime();
}

double C_MPI_Wtick(void)
{
    return MPI_Wtick();
}
