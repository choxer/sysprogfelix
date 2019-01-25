#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
//
//
//
//
#define BUF_LEN 4096

int main (int argc, const char* argv[] ){

	// script should append the content of first file to the second file
	//


	if ( argc < 2 ){
		fprintf(stderr, ">>usage: ./append <src_file> <dst_file>\n");
		return 1;
	}

	char buffer[BUF_LEN];
	char buffer2[BUF_LEN];


	int fd2 = open("test2.txt", O_RDWR | O_APPEND | O_SYNC);

	int fd = open("test.txt", O_RDONLY);



	ssize_t len1 = read(fd, buffer, BUF_LEN);

	ssize_t len2 = read(fd2, buffer2, BUF_LEN);


	printf("Buffer1:\n%s\n", buffer);
	printf("Buffer2:\n%s\n", buffer2);



	printf("%d\n%d\n", fd, fd2);
	lseek(fd2, 4096, SEEK_END);
	ssize_t len3 = write(fd2, buffer, strlen(buffer) );

	printf("Write:%d\n", len3);




	if(! close(fd) )
		if( ! close(fd2) )
			return 0;
	else
		fprintf(stderr, "Geoffnete Dateien konnten nicht korrekt geschlossen werden!\n\n");
	
}
