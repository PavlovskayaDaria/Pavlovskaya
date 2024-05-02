#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
	int fd;
	size_t size;
	char string[] = "Gr. 3.008.2.23";
	if((fd = open("wrfile.txt", O_WRONLY|O_CREAT, 0666))< 0) {
		printf("Oshibka pri otkritii faila na zapis'\n");
		exit(-1);
	}
	size = write(fd, string, 14);
	if (size != 14) {
		printf("Ne ydalos zapisat' 14 bait v fail\n");
		exit(-1);
	}
	else printf ("Stroka zapisana v fail\n");
	if (close(fd) < 0) {
		printf("Ne polychilos' zakrit' fail\n");
		exit(-10);
	}
	return 0;
}




