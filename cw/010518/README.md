# Aim: Stop. Collaborate, and listen.

FUNCTIONS:

`socket()` <sys/socket.h>

Creates a socket... returns a socket descriptor (int that works like a file descriptor)
* "Unnamed socket", no ip or port
* `socket(domain, type, protocol`)
    * domain: type of address (AF_INET or AF_INET6)
    * type: SOCK_STREAM or SOCK_DGRAM
    * protoocl: Combination of domain and type settings

* System library calls use a struct addrinfo to represent network address (containg information such as IP, adress, port, protocol)
```
struct addrinfo
    .ai_family:
        AF_INET: IPv$
        AF_INET6: IPv6
        AF_UNSPEC: Either
    .ai_socktype:
        SOCK_STREAM
        SOCK_DGRAM
    .ai_flags
        AI_PASSIVE: Automatically set to any incoming IP address.
    .ai_addr:
        Pointer to a struct sockaddr containg the IP address.
```
getaddrinfo <sys/types.h> <sys/socket.h> <netdb.h>

`getaddrinfo(node, service, hints, results)`:
node
    String containing an IP address or hostname to lookup.
    If NULL, use the local machine's IP address
service
    String with a port number or service name (if the service is in /etc/services)
    Pointer to a struct addrinfo used to provide settings for the lookup (type of address, .etc)
    results
    Pointer to struct addrinfo that will be a linked lis containing en tries for each matching address

Using getaddrinfo
```c
    struct addrinfo * hints, * results;
    hints = (struct addrinfo *) calloc(1,sizeof(struct addrinfo)); // set everthing to null
    hints->ai_family = AF_INET;
    hints->ai_socktype = SOCK_STREAM;
    hints->ai_flags = AI_PASSIVE;
    getaddrinfo(NULL, "80", hints, &results);
    //client: getaddrinfo("149.89.150.100", "9845", hints, &results);
    //do stuff...
    free(hints);
    freeaddrinfo(results);
```

bind (server only)
* Binds the socket to an address and port
* Returns 0 (success) or -1 (failure)

Using bind
```c
    int sd;
    sd = socket(AF_INET, SOCK_STREAM, 0);
    struct addrinfo *hints, * results;
    //use addrinfo (not shown)
    bind(sd, results->ai_addr,results->ai);
```

listen (server only)
listen(socket descriptor, backlog) 
socket descriptor: return value of socket
backlog: number of connections that can be queued up.
