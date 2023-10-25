#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	int status,client_fd,valread;
	char buffer[100];
	char message[100];
	
	struct sockaddr_in sa;
	
	client_fd=socket(AF_INET,SOCK_STREAM,0);
	sa.sin_family=AF_INET;
	sa.sin_addr.s_addr=inet_addr("127.0.0.1");
	sa.sin_port=htons(8888);	
	status = connect(client_fd, (struct sockaddr*)&sa,sizeof(sa));		
	printf("Enter a Message:\n");
	gets(message);
	send(client_fd,message,strlen(message),0);
	
	valread=recv(client_fd,buffer,100,0);
	buffer[valread]='\0';
	printf("%s\n",buffer);
	close(client_fd);
}
