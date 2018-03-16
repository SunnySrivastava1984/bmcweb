#pragma once
// settings for crow
// TODO - replace with runtime config. libucl?

/* #ifdef - enables ssl */
//#define CROW_ENABLE_SSL

/* #define - specifies log level */
/*
    Debug       = 0
    Info        = 1
    Warning     = 2
    Error       = 3
    Critical    = 4

    default to INFO
*/
#define CROW_LOG_LEVEL 1

// compiler flags
#if __cplusplus >= 201402L
#define CROW_CAN_USE_CPP14
#endif

#if defined(_MSC_VER)
#if _MSC_VER < 1900
#error "MSVC versions betfore VS2015 are not supported"
#endif
#endif
