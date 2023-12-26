#ifndef DATABASE_H
#define DATABASE_H
#include <string>

#define DATABASE_SIZE 16

typedef struct DATABASE{
    std::string regkey;
    int value;
} DATABASE;

extern DATABASE database[DATABASE_SIZE];
#endif
