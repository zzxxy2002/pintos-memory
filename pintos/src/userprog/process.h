#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

tid_t process_execute(const char* file_name);
int process_wait(tid_t);
void process_exit(void);
void process_activate(void);

#  define INTPTR_MIN		(-9223372036854775807L-1)
#  define INTPTR_MAX		(9223372036854775807L)
# define GIBI (1 << 30)

#endif /* userprog/process.h */
