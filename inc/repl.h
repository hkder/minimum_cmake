#ifndef SQLITE_REPL_H
#define SQLITE_REPL_H

#include <sys/types.h>

typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();
void print_prompt();
void read_input(InputBuffer*);
void close_input_buffer(InputBuffer*);

#endif
