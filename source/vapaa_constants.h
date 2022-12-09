#ifndef VAPAA_CONSTANTS_H
#define VAPAA_CONSTANTS_H

#define VAPAA_MPI_THREAD_SINGLE     0
#define VAPAA_MPI_THREAD_FUNNELED   1
#define VAPAA_MPI_THREAD_SERIALIZED 2
#define VAPAA_MPI_THREAD_MULTIPLE   3

#define VAPAA_MPI_IDENT     0
#define VAPAA_MPI_CONGRUENT 1
#define VAPAA_MPI_SIMILAR   2
#define VAPAA_MPI_UNEQUAL   3

#define VAPAA_MPI_COMM_WORLD      -1000
#define VAPAA_MPI_COMM_SELF        -100
#define VAPAA_MPI_COMM_NULL         -10
#define VAPAA_MPI_DATATYPE_NULL     -11
#define VAPAA_MPI_FILE_NULL         -12
#define VAPAA_MPI_GROUP_NULL        -13
#define VAPAA_MPI_INFO_NULL         -14
#define VAPAA_MPI_MESSAGE_NULL      -15
#define VAPAA_MPI_MESSAGE_NO_PROC  -150
#define VAPAA_MPI_OP_NULL           -16
#define VAPAA_MPI_REQUEST_NULL      -17
#define VAPAA_MPI_WIN_NULL          -18
#define VAPAA_MPI_PROC_NULL         -19
#define VAPAA_MPI_ANY_SOURCE      -2000
#define VAPAA_MPI_ANY_TAG         -2001

#define VAPAA_MPI_ORDER_C       321
#define VAPAA_MPI_ORDER_FORTRAN 123

#define VAPAA_MPI_COMM_TYPE_SHARED      5300
#define VAPAA_MPI_COMM_TYPE_HW_UNGUIDED 5400
#define VAPAA_MPI_COMM_TYPE_HW_GUIDED   5500

#define VAPAA_MPI_MAX_PROCESSOR_NAME          256
#define VAPAA_MPI_MAX_LIBRARY_VERSION_STRING 8192
#define VAPAA_MPI_MAX_ERROR_STRING            512
#define VAPAA_MPI_MAX_DATAREP_STRING           64
#define VAPAA_MPI_MAX_INFO_KEY                255
#define VAPAA_MPI_MAX_INFO_VAL               1024
#define VAPAA_MPI_MAX_OBJECT_NAME             128
#define VAPAA_MPI_MAX_PORT_NAME              1024

#define VAPAA_MPI_MAX           -40000
#define VAPAA_MPI_MIN           -40001
#define VAPAA_MPI_SUM           -40002
#define VAPAA_MPI_PROD          -40003
#define VAPAA_MPI_MAXLOC        -40004
#define VAPAA_MPI_MINLOC        -40005
#define VAPAA_MPI_BAND          -40006
#define VAPAA_MPI_BOR           -40007
#define VAPAA_MPI_BXOR          -40008
#define VAPAA_MPI_LAND          -40009
#define VAPAA_MPI_LOR           -40010
#define VAPAA_MPI_LXOR          -40011
#define VAPAA_MPI_REPLACE       -40012
#define VAPAA_MPI_NO_OP         -40013

#define VAPAA_MPI_CHARACTER                 -10000
#define VAPAA_MPI_LOGICAL                   -10001
#define VAPAA_MPI_INTEGER                   -10002
#define VAPAA_MPI_REAL                      -10003
#define VAPAA_MPI_DOUBLE_PRECISION          -10004
#define VAPAA_MPI_COMPLEX                   -10005
#define VAPAA_MPI_DOUBLE_COMPLEX            -10006
#define VAPAA_MPI_INTEGER1                  -10007
#define VAPAA_MPI_INTEGER2                  -10008
#define VAPAA_MPI_INTEGER4                  -10009
#define VAPAA_MPI_INTEGER8                  -10010
#define VAPAA_MPI_INTEGER16                 -10011
#define VAPAA_MPI_REAL2                     -10012
#define VAPAA_MPI_REAL4                     -10013
#define VAPAA_MPI_REAL8                     -10014
#define VAPAA_MPI_REAL16                    -10015
#define VAPAA_MPI_COMPLEX4                  -10016
#define VAPAA_MPI_COMPLEX8                  -10017
#define VAPAA_MPI_COMPLEX16                 -10018
#define VAPAA_MPI_COMPLEX32                 -10019
#define VAPAA_MPI_AINT                      -20000
#define VAPAA_MPI_COUNT                     -20001
#define VAPAA_MPI_OFFSET                    -20002
#define VAPAA_MPI_BYTE                      -30000
#define VAPAA_MPI_CHAR                      -30001
#define VAPAA_MPI_UNSIGNED_CHAR             -30002
#define VAPAA_MPI_SIGNED_CHAR               -30003
#define VAPAA_MPI_WCHAR                     -30004
#define VAPAA_MPI_SHORT                     -30005
#define VAPAA_MPI_UNSIGNED_SHORT            -30006
#define VAPAA_MPI_INT                       -30007
#define VAPAA_MPI_LONG                      -30008
#define VAPAA_MPI_UNSIGNED                  -30009
#define VAPAA_MPI_UNSIGNED_LONG             -30010
#define VAPAA_MPI_LONG_LONG_INT             -30011
#define VAPAA_MPI_UNSIGNED_LONG_LONG        -30012
#define VAPAA_MPI_FLOAT                     -30013
#define VAPAA_MPI_DOUBLE                    -30014
#define VAPAA_MPI_LONG_DOUBLE               -30015
#define VAPAA_MPI_C_BOOL                    -30016
#define VAPAA_MPI_INT8_T                    -30017
#define VAPAA_MPI_INT16_T                   -30018
#define VAPAA_MPI_INT32_T                   -30019
#define VAPAA_MPI_INT64_T                   -30020
#define VAPAA_MPI_UINT8_T                   -30021
#define VAPAA_MPI_UINT16_T                  -30022
#define VAPAA_MPI_UINT32_T                  -30023
#define VAPAA_MPI_UINT64_T                  -30024
#define VAPAA_MPI_C_COMPLEX                 -30025
#define VAPAA_MPI_C_FLOAT_COMPLEX           -30026
#define VAPAA_MPI_C_DOUBLE_COMPLEX          -30027
#define VAPAA_MPI_C_LONG_DOUBLE_COMPLEX     -30028
#define VAPAA_MPI_FLOAT_INT                 -40000
#define VAPAA_MPI_DOUBLE_INT                -40001
#define VAPAA_MPI_LONG_INT                  -40002
#define VAPAA_MPI_2INT                      -40003
#define VAPAA_MPI_SHORT_INT                 -40004
#define VAPAA_MPI_LONG_DOUBLE_INT           -40005
#define VAPAA_MPI_2REAL                     -40006
#define VAPAA_MPI_2DOUBLE_PRECISION         -40007
#define VAPAA_MPI_2INTEGER                  -40008

#define VAPAA_MPI_SUCCESS                    -400000
#define VAPAA_MPI_ERR_BUFFER                 -400001
#define VAPAA_MPI_ERR_COUNT                  -400002
#define VAPAA_MPI_ERR_TYPE                   -400003
#define VAPAA_MPI_ERR_TAG                    -400004
#define VAPAA_MPI_ERR_COMM                   -400005
#define VAPAA_MPI_ERR_RANK                   -400006
#define VAPAA_MPI_ERR_REQUEST                -400007
#define VAPAA_MPI_ERR_ROOT                   -400008
#define VAPAA_MPI_ERR_GROUP                  -400009
#define VAPAA_MPI_ERR_OP                     -400010
#define VAPAA_MPI_ERR_TOPOLOGY               -400011
#define VAPAA_MPI_ERR_DIMS                   -400012
#define VAPAA_MPI_ERR_ARG                    -400013
#define VAPAA_MPI_ERR_UNKNOWN                -400014
#define VAPAA_MPI_ERR_TRUNCATE               -400015
#define VAPAA_MPI_ERR_OTHER                  -400016
#define VAPAA_MPI_ERR_INTERN                 -400017
#define VAPAA_MPI_ERR_PENDING                -400018
#define VAPAA_MPI_ERR_IN_STATUS              -400019
#define VAPAA_MPI_ERR_ACCESS                 -400020
#define VAPAA_MPI_ERR_AMODE                  -400021
#define VAPAA_MPI_ERR_ASSERT                 -400022
#define VAPAA_MPI_ERR_BAD_FILE               -400023
#define VAPAA_MPI_ERR_BASE                   -400024
#define VAPAA_MPI_ERR_CONVERSION             -400025
#define VAPAA_MPI_ERR_DISP                   -400026
#define VAPAA_MPI_ERR_DUP_DATAREP            -400027
#define VAPAA_MPI_ERR_FILE_EXISTS            -400028
#define VAPAA_MPI_ERR_FILE_IN_USE            -400029
#define VAPAA_MPI_ERR_FILE                   -400040
#define VAPAA_MPI_ERR_INFO_KEY               -400041
#define VAPAA_MPI_ERR_INFO_NOKEY             -400042
#define VAPAA_MPI_ERR_INFO_VALUE             -400043
#define VAPAA_MPI_ERR_INFO                   -400044
#define VAPAA_MPI_ERR_IO                     -400045
#define VAPAA_MPI_ERR_KEYVAL                 -400046
#define VAPAA_MPI_ERR_LOCKTYPE               -400047
#define VAPAA_MPI_ERR_NAME                   -400048
#define VAPAA_MPI_ERR_NO_MEM                 -400049
#define VAPAA_MPI_ERR_NOT_SAME               -400050
#define VAPAA_MPI_ERR_NO_SPACE               -400051
#define VAPAA_MPI_ERR_NO_SUCH_FILE           -400052
#define VAPAA_MPI_ERR_PORT                   -400053
#define VAPAA_MPI_ERR_PROC_ABORTED           -400054
#define VAPAA_MPI_ERR_QUOTA                  -400055
#define VAPAA_MPI_ERR_READ_ONLY              -400056
#define VAPAA_MPI_ERR_RMA_ATTACH             -400057
#define VAPAA_MPI_ERR_RMA_CONFLICT           -400058
#define VAPAA_MPI_ERR_RMA_RANGE              -400059
#define VAPAA_MPI_ERR_RMA_SHARED             -400060
#define VAPAA_MPI_ERR_RMA_SYNC               -400061
#define VAPAA_MPI_ERR_RMA_FLAVOR             -400062
#define VAPAA_MPI_ERR_SERVICE                -400063
#define VAPAA_MPI_ERR_SESSION                -400064
#define VAPAA_MPI_ERR_SIZE                   -400065
#define VAPAA_MPI_ERR_SPAWN                  -400066
#define VAPAA_MPI_ERR_UNSUPPORTED_DATAREP    -400067
#define VAPAA_MPI_ERR_UNSUPPORTED_OPERATION  -400068
#define VAPAA_MPI_ERR_VALUE_TOO_LARGE        -400069
#define VAPAA_MPI_ERR_WIN                    -400070
#define VAPAA_MPI_T_ERR_CANNOT_INIT          -400071
#define VAPAA_MPI_T_ERR_NOT_ACCESSIBLE       -400072
#define VAPAA_MPI_T_ERR_NOT_INITIALIZED      -400073
#define VAPAA_MPI_T_ERR_NOT_SUPPORTED        -400074
#define VAPAA_MPI_T_ERR_MEMORY               -400075
#define VAPAA_MPI_T_ERR_INVALID              -400076
#define VAPAA_MPI_T_ERR_INVALID_INDEX        -400077
#define VAPAA_MPI_T_ERR_INVALID_ITEM         -400078
#define VAPAA_MPI_T_ERR_INVALID_SESSION      -400079
#define VAPAA_MPI_T_ERR_INVALID_HANDLE       -400080
#define VAPAA_MPI_T_ERR_INVALID_NAME         -400081
#define VAPAA_MPI_T_ERR_OUT_OF_HANDLES       -400082
#define VAPAA_MPI_T_ERR_OUT_OF_SESSIONS      -400083
#define VAPAA_MPI_T_ERR_CVAR_SET_NOT_NOW     -400084
#define VAPAA_MPI_T_ERR_CVAR_SET_NEVER       -400085
#define VAPAA_MPI_T_ERR_PVAR_NO_WRITE        -400086
#define VAPAA_MPI_T_ERR_PVAR_NO_STARTSTOP    -400087
#define VAPAA_MPI_T_ERR_PVAR_NO_ATOMIC       -400088
#define VAPAA_MPI_ERR_LASTCODE               -400089

#define VAPAA_MPI_MODE_APPEND             1
#define VAPAA_MPI_MODE_CREATE             2
#define VAPAA_MPI_MODE_DELETE_ON_CLOSE    4
#define VAPAA_MPI_MODE_EXCL               8
#define VAPAA_MPI_MODE_RDONLY            16
#define VAPAA_MPI_MODE_RDWR              32
#define VAPAA_MPI_MODE_SEQUENTIAL        64
#define VAPAA_MPI_MODE_UNIQUE_OPEN      128
#define VAPAA_MPI_MODE_WRONLY           256

#define VAPAA_MPI_WIN_FLAVOR_ALLOCATE    10
#define VAPAA_MPI_WIN_FLAVOR_CREATE      12
#define VAPAA_MPI_WIN_FLAVOR_DYNAMIC    205
#define VAPAA_MPI_WIN_FLAVOR_SHARED     165
#define VAPAA_MPI_WIN_UNIFIED             1
#define VAPAA_MPI_WIN_SEPARATE            2

#define VAPAA_MPI_MODE_NOCHECK       32
#define VAPAA_MPI_MODE_NOSTORE       64
#define VAPAA_MPI_MODE_NOPUT        128
#define VAPAA_MPI_MODE_NOPRECEDE    256
#define VAPAA_MPI_MODE_NOSUCCEED    512

#define VAPAA_MPI_UNDEFINED      -99999

#endif
