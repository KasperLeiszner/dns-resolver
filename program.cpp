#include <string>
#include <iostream>
#include <sys/types.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <netinet/in.h> 
#include <stdlib.h> 
#include <unistd.h>

#define PORT     8080 

using namespace std;

int main(){
    string targetDomain;
    cout << "Insert domain: ";
    cin >> targetDomain;
    cout << "Searching for ip address related to domain " + targetDomain << endl;

    string rootServer = "8.8.8.8";
    int sockfd;
    struct sockaddr_in servaddr; 
    const char *hello = "Hello from client"; 

    if( (sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0){
        cerr << "socket creation failed" << endl;
    }

    memset(&servaddr, 0, sizeof(servaddr));

    servaddr.sin_family = AF_INET; 
    servaddr.sin_port = htons(PORT); 
    servaddr.sin_addr.s_addr = INADDR_ANY; 
       
    int n;
    socklen_t len; 
       
    sendto(sockfd, (const char *)hello, strlen(hello), 0, (const struct sockaddr *) &servaddr, sizeof(servaddr)); 

    cout << "Hello world!" << endl;

    return 0;
}
