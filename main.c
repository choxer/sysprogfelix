//#include <stdlib.h>
#include "bye.h"
#include "hello.h"
#include <stdio.h>

int main(int argc,char* argv[argc]){
	
	if ( argc < 2 ){
		fprintf(stderr, "usage: ./main <name>\n");
		return 1;
	
	}

	hello( (char*) argv[1] );
	bye( (char*) argv[1] );

	return 0;
}
