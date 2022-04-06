#include <stdio.h>
#include <sys/types.h> //socket
#include <sys/socket.h> //socket
#include <netinet/in.h> //IPPROTO_TCP
#include <stdlib.h>    //exit()
#include <unistd.h> //close()
#include <string.h> //memset()
#include <arpa/inet.h> //inet_addr()

int main(){
	
	int sock_tcp,sock_udp;
	struct sockaddr_in client;
	
	sock_tcp = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	sock_udp = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
	
	if(sock_tcp == -1){
		printf("error\n");
		exit(1);
	}
	if(sock_tcp == -1){
		printf("error\n");
		exit(1);
	}
	
	printf("TCP_socket = %d\n", sock_tcp);
	printf("UDP_socket = %d\n",sock_udp);
	
	memset(&client, 0, sizeof(client)); //16bytes to 0
	client.sin_family = AF_INET; // 2 byte
	client.sin_port = htons(30000); //2 byte
	client.sin_addr.s_addr = inet_addr("192.168.70.128"); //4byte

	int bind_tcp = bind(sock_tcp, (struct sockaddr*) &client, sizeof(client));	
	
	if(bind_tcp == -1){
		perror("bind_error");
		exit(1);
	}
	printf("bind_success; %d\n",bind_tcp);
	return 0;
}
