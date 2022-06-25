#ifndef HASHING_H_INCLUDED
#define HASHING_H_INCLUDED

#include <stdio.h>
#include <stdint.h>

#define ERR_PREFIX HAS
#include <Error.h>

enum _SET_ErrorID {
    _HAS_ERRORID_NONE = 0x500000000
};

typedef struct __HAS_Hash HAS_Hash;

struct __HAS_Hash {
    uint64_t *table;
    uint32_t depth;
};

#define _HAS_HASHBASESIZE 256



#endif