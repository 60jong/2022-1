#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
	pid_t pid[10];

	int count = 1;
	int child_status;
	for (int i = 0; i < 10; i++) {

		if((pid[i] = fork())==0) {
			printf("%d %d\n",getpid(),getpgrp());
			exit(100 + i);
		}
	}
	
	for(int i = 0; i < 10; i++) {
		pid_t wpid = waitpid(pid[i],&child_status,0);
		if (WIFEXITED(child_status))
			printf("child %d terminated with exit status %d\n",wpid,WEXITSTATUS(child_status));
		
	}
	return 0;
}
