#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>


void int_handler(int signum) {
	printf("Hello~~~~~");
	sleep(2);
}


int main(void) {


	signal(SIGKILL,int_handler);

	
	kill(getpid(), SIGKILL);

	return 0;
}
