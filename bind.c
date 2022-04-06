#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(void) {

	int tcp_sock;
	struct sockaddr_in client;

	tcp_sock = socket(AF_INET, SOCK_STREAM, 0);
	if(tcp_sock == -1) {
		perror("socket make failed\n");
		exit(1);
	}
	printf("tcp_sock : %d\n",tcp_sock);	
	

	memset(&client,0,sizeof(client));
	client.sin_family = AF_INET;
	client.sin_port = htons(30000);
	inet_aton("192.168.70.128", &client.sin_addr);

	int tcp_sock_bind;
        tcp_sock_bind = bind(tcp_sock,(struct sockaddr*) &client,sizeof(client));
	
	if(tcp_sock_bind == 0)
		printf("bind success\n");
	return 0;
}
