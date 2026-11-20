// Copyright 2026 dywoq - Apache License 2.0
// https://github.com/dywoq/spark

#ifndef SPARK_BASE_STATUS_H
#define SPARK_BASE_STATUS_H

#include <stdint.h>

// Defines a set of shared status code that are used and supplied by functions
// across the project. It indicates the status of a specific operation.
enum spark_status : uint32_t {
  SPARK_STATUS_OK = 0,
  SPARK_STATUS_INVALID_ARG,
  SPARK_STATUS_MEMORY_ALLOCATION_FAILED,
};

#endif
