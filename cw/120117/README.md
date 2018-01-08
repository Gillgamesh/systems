# Aim: Sharing is caring!

## Do Now:

Write a simple c program that creates a child process. Have the parent wait for the child to exit. Ceate a primative variable in the parent before forking, then modify that variable in the schild


There can be memory that multiple processes can interact with. It's a concept called shared memory.

Shared memory
`<sys/shm.h>, <sys/ipc.h>, <sys/types.h>` 
* not just shared between parents n stuff
* accessed via a key.
* shared memory does not get released when a program exits.

5 shared memory operations:
* Create a segment (happens once)
* Access the segment (happens once per process)
* Attach the segment to a variable (once per process). Works exactly like a pointer
* Detach the segment from a variable (once per process).

`shmget(key, size, flags)` -- create or acess a shared memory segment.
* Returns a shared memory descriptor (similar concept to a file descriptor), or -1 (errno) if it fails.
* key; unique integer identifier for shared memory segment
* size: how much memmory to request
* flags: include permissions for the segment, combined with bitwise or

* IPC_CREAT: Create the segment
    * If segment is new, wlill set value to all 0s.
* IPC_EXCL: Fail if the segment already exists and IPC_CEAT is on.

`shmat()` -- attach a segment to a variable, returns the pointer or -1
* descriptor: return value of shmget
* address: If 0, the OS will provide the proper address
* flags, usually 0, there is one useful flag: `SHM_RDONLY`.
