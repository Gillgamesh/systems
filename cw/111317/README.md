# Aim: What the fork???

* strsep works in magical ways, adds nulls to original arrays where it finds the seperateor, then makes pointers at the start of it.
* creates an array of pointers to the delim'd thing


`fork()`:
* Creates a seperate process based on the current one, new process is called a child. The original is the parent.
* Has a copy of everything, all parts of the parent process are copied, including stack and heap.
* Have the exact same properties!! Including where they are in processing the stack.
* Order is not garunteed
* ```while(1) fork();```
* fork() returns different values to the different things
* if the child is running, returns 0 to the child and the child's pid to the parent or -1 (errno)
