#include <stdlib.h>

const char msg[]="\n\nHell Of World !\n\n\n";

int main(int argc, char *argv[]) {
	write(STDOUT,(int)msg,sizeof(msg)-1);
	exit(123);
	return argc;
}
