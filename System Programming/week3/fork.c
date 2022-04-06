#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {

	if(fork() == 0) {
		execl("/home/ykj/2022_2/System_Programming/week3/exec","exec",NULL);
	}
	else {
		wait(NULL);
		printf("Parent terminated\n");
	}



	return 0;	
}
