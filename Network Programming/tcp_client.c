//   TCP/IPv4 Client Program 
#include <stdio.h>     //printf 
#include <sys/types.h>    //socket     
#include <sys/socket.h>  //socket
#include <netinet/in.h> //IPPROTO_TCP
#include <stdlib.h>    //exit()
#include <unistd.h> //close()




int main(int argc) {
	//1. socket create
	//close(0);
	struct sockaddr_in client;
	int socket_no = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);


	if (socket_no == -1) {
		printf("sokcet error \n");
		exit(1);
	}
	printf("socket_no = %d\n", socket_no);

	//ipv4 192.168.70.128 //port 30000
	client.sa_family_t = AF_INET;///address family internet
	client.sin_port = 30000;
	client.sin_addr = 192.168.70.128
	client.sin_zero = 0;
	return 0;

}
