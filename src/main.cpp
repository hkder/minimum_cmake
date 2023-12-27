#include <stdio.h>
#include "db.h"

int main(int argc, char** argv)
{
    for(int i = 0; i < DATABASE_SIZE; ++i)
    {
        printf("index: %d, key: %s, value: %d\n", i, database[i].regkey.c_str(), database[i].value);
    }
    return 0;
}
