# Aim: If you don't pay attention you'll get into a heap of trouble!

Struct
```c

struct {int a; char x;} s;

```

We use the . operator to access a value inside a struct

ie
`s.a = 10; s.x = '@'`

Declaring:

```c

struct s {
    int a;
    char x;
    char name[50];
}

```

is completely fine

You can make pointers to functions, which will basically look like a method

`void foo_stuff(struct foo *s)` makes a copy of everything, including pointers

. binds before *

i.e.
```
struct foo *p;
p = &s
```

`(*p).x` is not the same as `*p.x`

To access data from a struct pointer, you can also use ->:

`p->x //this is the same as (*p).x`

crazy right?


MEMORY ALLOCATION:

Stack memory vs Heap memory:

Stack contains normal memory we declare

(regular variables, pointers, arrays, etc.)

function call = pushed onto the stack

Functions are pushed onto the stack in the order they are called, and popped off when completed. When a function is popped off the stack memory associated with it is released.

If you were to declare an array, the array is released. 

Heap = dynamically allocated.
