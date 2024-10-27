#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <cstring>

using namespace std;

int main(){
  string targetDomain;
  
  cout << "Insert domain: ";
  cin >> targetDomain;
  cout << "Searching for ip address related to domain " + targetDomain << endl;
  
  int udp_socket = socket(AF_INET, SOCK_DGRAM, 0);
  
  if ( udp_socket < 0 ) {
    cerr << "socket creation failed\n";
    return -1;
  }
  
  cout << "UDP socket created succesfully\n";
  
  struct sockaddr_in server_address;
  memset(&server_address, 0, sizeof(server_address));
  server_address.sin_family = AF_INET;
  server_address.sin_port = htons(53);
  
  const string rootServer = "8.8.8.8";
  
  if (inet_pton(AF_INET, rootServer, &server_address.sin_addr) <= 0){
    cerr << "Invalid address or address not supported\n";
    close(udp_socket);
    return -1;
  }
  
  return 0;
}
