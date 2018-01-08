# Aim: How do we flag the resources

## Do Now: Possible ways to do it.

* Used in the early days of the railroad as signalling devices.
* i.e. one train can use a bridge at a time.

Semaphores -- Edsger Dijkstra


IPC construct used to control access to a shared resource.
Most commonly, it is used as a counter representing how many processes can access a resource at a given time.

If a semaphore has a value of 3, then it can have 3 active "users"
If a semaphore has a value of 0, then it is unavailable.

Semaphore operations are "atomic", meaning the will not be split into multiple processor instructions.

### Semaphore operations.

* Create a semaphore.
* Set an initial value.
* Remove a semaphore.
* Up(S)/ V(S) -atomic
   Release the semaphore to signal you are done with its associated resource.
* Down(S) / P(S) - atomic
   Attempt to take the semaphore.
   Imagine you are doing `while (S == 0) {block} S--;

### Semaphores in C
You should use `<sys/types.h>`, `<sys/ipc.h>`, and `<sys/semi.h>`

* `semget(<KEY>, <AMOUNT>, <FLAGS>)` Create/get access to a semaphore.
* Not the same as Up(S) or Down(S), returnws a semaphore descriptor or -1.

