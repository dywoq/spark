// Copyright 2026 dywoq - Apache License 2.0
// https://github.com/dywoq/spark

#ifndef SPARK_INTERNAL_CONFIG_H
#define SPARK_INTERNAL_CONFIG_H

// Checks whether the compiler is compatible with this library. It checks
// whether the current C standard is 23. Use it to automatically disable
// programming interface headers of Spark:
//
//  #include <spark/internal/config.h>
//
//  #if SPARK_INTERNAL_COMPILER_COMPATIBLE
//  // ...
//  #endif
#define SPARK_INTERNAL_COMPILER_COMPATIBLE                                     \
  __STDC_VERSION__ &&__STDC_VERSION__ >= 202311L

// This macro automatically expands to the "extern "C"" statement if the macro
// __cplusplus is defined.
#if __cplusplus
#define SPARK_INTERNAL_EXTERN_C extern "C"
#else
#define SPARK_INTERNAL_EXTERN_C
#endif

#endif
