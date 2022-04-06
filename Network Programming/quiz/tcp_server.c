// TCP/IPv4 Server Program

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(void) {

	int ser_sock;

	struct sockaddr_in server, client;

	char* ser_ip = "192.168.70.128";
	char* ser_port = "30000";

	ser_sock = socket(AF_INET, SOCK_STREAM, 0);
	if(ser_sock == -1) {
		perror("socket make failed\n");
		exit(1);
	}
	printf("ser_sock : %d\n",ser_sock);	
	

	memset(&server,0,sizeof(server));
	server.sin_family      = AF_INET;
	server.sin_port        = htons(atoi(ser_port));
	server.sin_addr.s_addr = inet_addr(ser_ip);

	int ser_sock_bind;
        ser_sock_bind = bind(ser_sock,(struct sockaddr*) &server,sizeof(server));
	
	if(ser_sock_bind == 0)
		printf("server bind success\n");





	//listen
	if(listen(ser_sock, 100)==-1){
		perror("listen error");
		exit(1);
	}

	printf("server listen success\n");


	int cli_len;
	cli_len = sizeof(client);

	int accept_no;
	accept_no = accept(ser_sock, (struct sockaddr*) &client, &cli_len);
	if(accept_no < 0) {
		perror("accept failed : ");
		exit(1);
	}

	printf("accept_no = %d\n",accept_no);

	char temp1[100];
	memset(temp1,0,sizeof(temp1));

	int recv_len;
	if((recv_len = recv(accept_no,temp1,sizeof(temp1),0))==-1){
		perror("recv error : ");
		exit(1);
	}

	printf("Server Recv : %s\n",temp1);
	
	return 0;
}
