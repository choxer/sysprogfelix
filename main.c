#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "awesome.h"

#if __awesome_ver < 2
#error "Header Datei liegt in zu alter Version vor. Bitte Updaten!"
#endif


int main(){
	
#ifdef DEBUG
	puts("starting");
#endif
hello_awesome(getlogin());

#if __awesome_ver == 2
	something_awesome(42);
#endif

#if __awesome_ver == 3
	do_something_awesome(42);
#endif


#ifdef DEBUG
	puts("done");
#endif
	return EXIT_SUCCESS;
}
