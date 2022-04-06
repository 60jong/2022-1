#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

void sig_handler(int signum) {
	printf("signal handler started\n");
	sleep(1);
}

int main(void) {
	signal(SIGALRM,sig_handler);

	printf("signal hanlder for SIGALRM registered\n");

	kill(getpid(), SIGALRM);

	printf("hello!\n");
	return 0;
}
