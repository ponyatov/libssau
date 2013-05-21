#include <stdlib.h>

#ifdef i386

void inline _sc1(const uint8_t nr,uint32_t p1) {
	asm (
		"movl %0,%%eax\n"
		"movl %1,%%ebx\n"
		"int $0x80\n"
		:
		: "g"(nr), "g"(p1)
	);
}

void inline _sc3(const uint8_t nr,uint32_t p1,uint32_t p2,uint32_t p3) {
	asm (
		"movl %0,%%eax\n"
		"movl %1,%%ebx\n"
		"movl %2,%%ecx\n"
		"movl %3,%%edx\n"
		"int $0x80\n"
		:
		: "g"(nr), "g"(p1), "g"(p2), "g"(p3)
	);
}

#endif // x86
