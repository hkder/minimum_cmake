#include <stdio.h>
#include "db.h"

int main(int argc, char** argv)
{
    printf("key: %s, value: %d\n", database[0].regkey.c_str(), database[0].value);
    printf("key: %s, value: %d\n", database[1].regkey.c_str(), database[1].value);
    return 0;
}
