# Aim: Let's head to function town.

## Do Now: Open your code for the previous hw 

```C
void foo(float * x) {
    *x = 59;
}
float a =23;
foo(&a);
```

EVERYTHING is pass by value in Java, the value was just the pointer in Java


* You cannot call a function without declaring it
To get around this:

* Write all your functions at the top
* Provide header at the top of C file (for example, write `void print_array(int *a, int length);`

* you can also declare them in a totally different file, i.e. `myheaders.h`
* Use quotes i.e. `#include "../my_headers.h"`


