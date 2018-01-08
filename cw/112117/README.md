# Aim: A pipe by any other name...

* Unnamed pipes have no external descriptor.


* Named Pipes are also called "fifos", because data is appended to the end and read from the beginning. 
* FIFOS are unidrectional* (sorta)
* `mkfifo <name>` can be used to make pipes, they show up in your file table 
* if you cat the pipe, you will get nothing and you wait for the info to be put in.
* Connection is in memory! And only in memory. Does not take up storage space. 
* stays open as long as there is a connection on both sides.

In C:

mkfif - <sys>types.h> <sys/stat.h>

c function to create a FIFO
Return 0 on success and -1 on failure
Once created, the FIFO acts like ar egular file, and we can use open, read, write, and close on it.
mkfifo(<name>, <permissions>)
FIFOs will block on open until both ends of the pipe have a connection.
* cd command cannot be exec'd
* same hing for exit
