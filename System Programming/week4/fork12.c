#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

void int_handler(int sig) {
	printf("Process %d received signal %d\n",getpid(), sig);
	_exit(0);
}


int main(void) {
	pid_t pid[3];

	int child_status;
	
	signal(SIGINT,int_handler);

	for(int i = 0; i < 3; i++) {
		pid[i]=fork();
		if(pid[i] == 0) {
			
			while(1)
				;

		}
	}
	for(int i = 0; i < 3; i++) {
		printf("Killing process %d\n",pid[i]);
		kill(pid[i],SIGINT);
	}

	for(int i = 0; i < 3; i++) {
		pid_t wpid = wait(&child_status);
		if(WIFEXITED(child_status)) {
			printf("Child %d terminated with exit statis %d\n",wpid,WEXITSTATUS(child_status));
		} else {
			printf("Child %d terminated abnormally\n",wpid);
		}

	}
	return 0;
}
