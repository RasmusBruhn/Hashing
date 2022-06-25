#include <stdio.h>
#include <stdint.h>
#include "Hashing.h"

int main(int argc, char **argv)
{
    // Create a hash table
    HAS_Hash *Hash = HAS_CreateHash(8, 0);

    if (Hash == NULL)
    {
        printf("Unable to create hash: %s\n", HAS_GetError());
        return 0;
    }

    uint64_t HashVal;

    // Print some hashes
    for (uint64_t Val = 0; Val < 10; ++Val)
        printf("Hash: %lu\n", HAS_HashValue(Hash, (uint8_t *)&Val, sizeof(uint64_t)));

    // Hash a long value
    char *String = "The final has test with a long input to check if it works";
    printf("Final hash: %lu\n", HAS_HashValue(Hash, String, strlen(String)));

    printf("Finished without errors\n");

    return 0;
}