// #define _POSIX_SOURCE
#include <unistd.h>
// #undef _POSIX_SOURCE

#include <stdio.h>


// from ibm.com // not anymore

int main() {

	char cwd[4095];

	if (getcwd(cwd, sizeof(cwd)) != NULL){
		printf("%s\n", cwd);
	}
	else {
		perror("getcwd() error");
		return 1;
	}
	return 0;
}
