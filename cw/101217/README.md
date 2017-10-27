# Aim: malloc & free: The dynamic duo!

## Do Now: In a moment, you wil be given a pair of functions. Figure out what they do, and write a small program to demonstrate them.


Dynamic memory allocation

malloc(size_t x)

* Allocates x bytes of memory from the heap
* returns the address at the beginning of the allocation
* returns a void *, always typecast to the correct pointer type.

free(void *, 
