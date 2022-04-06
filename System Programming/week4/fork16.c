#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main (void) {


	int count = 1;
	if(fork() == 0) {

		fork();

		printf("Child%d: pid = %d || pgrp = %d\n",count++,getpid(), getpgrp());

		while(1);
	}

	
	return 0;
}
