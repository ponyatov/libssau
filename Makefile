default: test
check: test
	./test

clean:
	rm -rf *.o *.a test

MODULES = crt0.o crt1.o crti.o crtn.o syscall.o exit.o write.o

libc.a: $(MODULES)
	ar rcs $@ $(MODULES)
	
HFILES = stdlib.h

CFLAGS = -fno-asynchronous-unwind-tables -O2 -L. $(INCLUDE) -D$(ARCH)

%.o: %.c $(HFILES) Makefile
	$(CC) $(CFLAGS) -c -o $@ $<

test: test.c libc.a
	$(CC) $(CFLAGS) -o $@ $<
