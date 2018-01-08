# Aim: Always tip your servers.

### Small possible edit:

Use a sighandler to remove the well known pipe on exit ! ! ! 


### Multiple clients ???? ? ? ? 

Forking server/client design pattern:

2. Handshakes
  1. Client connects to server and sends the private FIFO name. Client waits for a response from the server. 
  2. Server receivves client's messages and forks off a subserver.
  3. Subsever connects to a client FIFO, sending an intiail acknowledgement message.
