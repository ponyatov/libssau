default: libc.a test

MODULES = crt0.o crt1.o crti.o crtn.o syscall.o exit.o write.o  

HFILES = stdlib.h

CFLAGS = \
	-fno-asynchronous-unwind-tables \
	-O0 \
	-L. \
	$(INCLUDE)
# -nostdlib 	

%.o: %.c $(HFILES) Makefile
	$(CC) $(CFLAGS) -c -o $@ $<

test: test.c libssau.a $(HFILES)
	$(CC) $(CFLAGS) -o $@ $< && ./$@
	
libc.a: $(MODULES) $(HFILES) Makefile 
	ar rcs $@ $(MODULES)
