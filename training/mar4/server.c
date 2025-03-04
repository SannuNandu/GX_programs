#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>


int main(){

	char server_message[256]="you have reached server";
	int server_socket,client_socket;

	server_socket=socket(AF_INET, SOCK_STREAM, 0);

        if(server_socket<0){
                perror("Socket failed");
                exit(EXIT_FAILURE);
        }

	struct sockaddr_in server_address;
        server_address.sin_family = AF_INET;
        server_address.sin_port = htons(9002);
        server_address.sin_addr.s_addr=INADDR_ANY;

	if (bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address)) < 0) {
		perror("Bind failed");
		exit(EXIT_FAILURE);
	}

	if (listen(server_socket, 5) < 0) {
		perror("Listen failed");
		exit(EXIT_FAILURE);
	}
//new socket
	client_socket=accept(server_socket,NULL,NULL);

	if(client_socket<0){
		perror("accept failed");
                exit(EXIT_FAILURE);
	}

	send(client_socket,server_message,strlen(server_message),0);
	printf("message sent to clent:\n");

	close(client_socket);
	close(server_socket);

	return 0;

}
