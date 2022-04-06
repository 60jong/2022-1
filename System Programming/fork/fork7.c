#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
void fork7();

int main(void) {

	fork7();
	return 0;
}

void fork7(){
	if(fork() != 0) {
		printf("Terminating Parent, PID = %d\n",getpid(		));
	exit(0);
	} 
	else{
		printf("Running child, PID : %d\n",getpid());
		
		while(1)
			;
	}
}
