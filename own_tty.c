#include <stdlib.h>
#include <stdio.h>

#include <unistd.h>

int main() {
	//	readlink ??
	
	long unsigned int test_int = 4095;	// = ?
	char *test2 = malloc(test_int+1);	// muss Adresse sein ?!

	// wie den ersten string besetzen?
	//
	readlink("/proc/self/fd/0", test2, test_int);
	
	printf("%s\n", test2);
	
	free(test2);

	// /dev/pts/*

}
