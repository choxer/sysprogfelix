#include <unistd.h>
// #include <sys/stat.h>
#include <sys/types.h>

#include <stdio.h>


// zu einfach: ?!
#include <pwd.h>


int main() {
	uid_t test = geteuid();
	//printf("%d\n", test);

	printf("%s\n", getpwuid(test)->pw_name);
}
