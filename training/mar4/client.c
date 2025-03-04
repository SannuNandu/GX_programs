#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>



int main(){
	int network_socket;
	network_socket=socket(AF_INET, SOCK_STREAM, 0);

	if(network_socket<0){
		perror("Socket failed");
		exit(EXIT_FAILURE);
	}

	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9002);
	server_address.sin_addr.s_addr=INADDR_ANY;

	int connection_status=connect(network_socket,(struct sockaddr *)&server_address, sizeof(server_address));
	if(connection_status==-1){
		perror("connection failed");
                exit(EXIT_FAILURE);
	}

	char buffer[1024];

	recv(network_socket, buffer, sizeof(buffer), 0);
	printf("Message from server: %s\n", buffer);

	close(network_socket);

	return 0;


}
