// Copyright 2026 dywoq - Apache License 2.0
// https://github.com/dywoq/spark

#ifndef SPARK_MEMORY_ARENA_H
#define SPARK_MEMORY_ARENA_H

#include <spark/internal/config.h>

#if SPARK_INTERNAL_COMPILER_COMPATIBLE

#include <spark/base/status.h>
#include <stddef.h>

struct spark_memory_arena;

SPARK_INTERNAL_EXTERN_C enum spark_status spark_memory_arena_init(
    struct spark_memory_arena **dest_arena,
    size_t alignment,
    size_t initial_storage_capacity
);

SPARK_INTERNAL_EXTERN_C enum spark_status
spark_memory_arena_destroy(struct spark_memory_arena **dest_arena);

SPARK_INTERNAL_EXTERN_C enum spark_status spark_memory_arena_get_alignment(
    struct spark_memory_arena *arena,
    size_t *dest_alignment
);

SPARK_INTERNAL_EXTERN_C enum spark_status spark_memory_arena_get_size(
    struct spark_memory_arena *arena,
    size_t *dest_size
);

SPARK_INTERNAL_EXTERN_C enum spark_status spark_memory_arena_get_capacity(
    struct spark_memory_arena *arena,
    size_t *dest_capacity
);

SPARK_INTERNAL_EXTERN_C enum spark_status spark_memory_arena_alloc(
    struct spark_memory_arena *arena,
    void **dest_pointer,
    size_t requested_size
);

SPARK_INTERNAL_EXTERN_C enum spark_status
spark_memory_arena_destroy_storage(struct spark_memory_arena *arena);

SPARK_INTERNAL_EXTERN_C enum spark_status spark_memory_arena_alloc_storage(
    struct spark_memory_arena *arena,
    size_t initial_storage_capacity
);

#endif

#endif
