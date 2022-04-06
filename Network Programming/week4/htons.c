#include <stdio.h>
#include <arpa/inet.h>

int main(void) {
	struct sockaddr_in addr;


	char* ip = "192.168.70.128";
	char* port = "8080";

	addr.sin_addr.s_addr  = inet_addr(ip);

	printf("%#x\n",addr.sin_addr.s_addr);

	printf("%s\n", inet_ntoa(addr.sin_addr));
	
	
	return 0;
}
