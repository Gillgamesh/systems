# Aim: Socket To Me

Today will generally be just general concepts to initiate a socket.

* A socket is a connection between 2 programs over a *network*
* can between the same computer aswell, keep that in mind!
* socket corresponds to an IP address / Port pair

To use a socket:
1. Create the socket.
2. bind it to an address and port.
3. Listen/initiate a connection.
4. send/receive data

## IP Addresses
* All devices connected to the internet have an IP address.
* IPv4 and IPv6
* Addresses are allocated in blocks to make routing easier.
* [0-255].[0-255].[0-255].[0-255]
* each group is called an octet
* 127.0.0.1 = loopbacck = localhost
* 192.168.{0-255}.{0-255} is used for local address subnetting.


IPV6:
* 16 byte address in the form of [0-ffff]:(repeat for 8 different sets)
* Leading 0s are ignored
* ANy number of consecutive 0 hextets can be repealed with ::.
