# Aim: Continuation


`free`
* releases dynmically allocated dmemory.
* Takes one parameter, a pointer to the beginning of a dynamically allocated block of memory
* Every call to malloc/calloc should have a corresponding call to free
* i.e.

```c
int *p;
p = (int *)malloc( 20 );
free(p);
```

If it doesn't say it initalizes the memory, then it prolly doesn't.

You can call free on any pointer to the first part of the block.

OS maintains a large table that lets you know what pointer.

* You also can't free stuff your program doesn't own.

* free() only works on heap memory


calloc = "Clear allocation"

* If x is larger, it will depe copy the values over, and provide you a different memory address. It will then free the old one.
