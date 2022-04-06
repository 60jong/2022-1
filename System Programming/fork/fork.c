#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	pid_t rpid = fork();
	if(rpid< 0){
		perror("Fork failed:");
		return -1;
	}
	else if (rpid==0){
		printf("I am Child, PID : %d/GET_PID : %d\n",getppid(),getpid());

	}
	else{
		printf("I am Parent, PID : %d/GET_PID : %d\n",getppid(),getpid());
	}
	return 0;
}
