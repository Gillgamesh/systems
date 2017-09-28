# Aim: Try not to hurt yoursef, the point is sharp.

* Actually conceptually difficult and strange, compared to rest of the class

Consider the array `{1000,1004,1008,1012,1016}`

and consider this loop on an array:

`for (i = -3; i<5; i++) printf("arr[%d]: %d\n",i,arr[i]);`

You are asking for memory that acts contiguolusly.


The memory is there, just not necessarily part of that array.

Pointers - Variables designed to store memory addresses.

Variables designed to store memory addresses.

Is designed to store an integer value, but specifically for memory addresses. 

Array variable is kind of a pointer.

* Not generic pointers because they can't be modified

* Points are variables designed to store memory addresses

* * is used to declare a variable as a pointer type, ex. int *p, double *q, char *r, or int * p

`%lu`, where the l stands for long and the u for unsigned

* you can `&` operator to get the address of a variable

* `*ip = 54;`, these can be used as a pointer.

* USE POINTERS, not arrays

```C
int *p = &i;
char *c = &i;

p++; //will add 4
c++; //will add 1

// ie arr[i] = &(arr + i)
