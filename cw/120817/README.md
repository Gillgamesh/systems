# Aim: Creating a handshake agreement. 

## Do Now:
 Consider a program that uses pipes in order to communicate between 2 seperate executable files. One file is a server that is always running, the other is a client.

You can have a certain pattern of data that is unique to the client that lets you know you're dealing with that client.

Pipes are double sided, so you could theoretially read/write from both sides. You can get the client to send a unique identifier of some sort, then get the server to ping it back to you, maybe wth some addiitonal information appended at the end. Obviously, this would need some sort of standard.

1. Client sends pre-arranged
2. Server checks message
3. Server sends pre-arranged respponse
4. Client chekcs response
5. Client sends a message back

* Both ends of the connection must vrerify that they can send and reeive data to and from each other.
3 way handshake:

Client sends a message, to the server, server sends a response to the client, client sends the message back.

* Mr. DW wears a trilbee (type of Fedora).
* Basic server/client design pattern

1. Setup 
  1. Server ceates a FIFO (well known pipe) and waits for a connection. 
  2. Client creates a "private" FIFO. 
2. Handshake
  1. Client connects to the server and sends the private FIFO name. Client waits fora  response from the server.
  2 Server receives the client's message and removes the WKP.
  3. Server connects to client fifo, sending an initial acknowledgement message.
  4. Client receives server's message, remove it's private FIFO.
  5. Client sends response to server.
