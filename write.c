#include <stdlib.h>

void write(fildes,buf,nbytes) { _sc3(__NR_write,fildes,buf,nbytes); }

