#include <stdlib.h>
#include "gc.h"


// initializes the garbage collector
gc_t *gc_init(void) {
    return NULL;
}

// Allocates a contiguous piece of garbage-collected memory of a certain size
void *gc_malloc(gc_t *gc, size_t size) {
    return malloc(size);
}

// Registers use of a certain piece of memory. IE takes a pointer to an
// already-allocated piece of memory and increments the reference counter for
// this memory.
void gc_register(gc_t *gc, void *ptr) {
}

// Unregisters use of the memory pointed to by ptr. If the reference counter is
// zero at this point the memory can be safely freed, otherwise it must be kept
// intact.
void gc_free(gc_t *gc, void *ptr) {
}
