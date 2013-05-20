#ifndef __STDLIB_H_
#define __STDLIB_H_

#include <stdint-gcc.h>
#include <asm/unistd.h>

#define NULL ((void *)0)

#define STDIN 0
#define STDOUT 1
#define STDERR 2

void exit(int code);
void write(int fildes,int buf,int nbytes);

void _start();
int main(int argc, char *argv[]);

void inline _sc1(const uint8_t nr,uint32_t p1);
void inline _sc3(const uint8_t nr,uint32_t p1,uint32_t p2,uint32_t p3);

#endif // __STDLIB_H_
