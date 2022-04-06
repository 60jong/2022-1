//   TCP/IPv4 Client Program 
#include <stdio.h>     //printf 
#include <sys/types.h>    //socket     
#include <sys/socket.h>  //socket
#include <netinet/in.h> //IPPROTO_TCP
#include <stdlib.h>    //exit()
#include <unistd.h> //close()
#include <string.h>
#include <arpa/inet.h>



int main(int argc) {

	struct sockaddr_in server;
	int sock_cli = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);


	char* server_IP = "192.168.70.128";
	char* server_PORT = "30000";
	if (sock_cli == -1) {
		printf("socket error \n");
		exit(1);
	}
	printf("sock_cli = %d\n", sock_cli);

	memset(&server, 0, sizeof(server));
	server.sin_family = AF_INET;
	inet_aton(server_IP,&server.sin_addr);
	server.sin_port = htons(atoi(server_PORT));

	if((connect(sock_cli, (struct sockaddr*) &server, sizeof(server))==-1)){
			perror("connect error\n");
			exit(1);
	}

	printf("connect OK\n");
	
	char data[100];
	strcpy(data,"Hello Server~~~");
	int send_rtn = send(sock_cli, data, strlen(data),0);
	if(send_rtn != strlen(data)){
		perror("send error : ");
		exit(1);
	}
	printf("Client Send : %s\n",data);
	printf("send success\n");

	
	return 0;
}
