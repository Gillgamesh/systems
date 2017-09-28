# Aim: How to write functioning code

## Do Now: write a c program with a simple function; call it in main

Notes:
* You only need to seed once, so you can have reoccurances.
* If you seed with the same value, you will get the same sequence
* This is what `srand(time(NULL))` does
* `int ap2 = (arr2 + 9)` actually adds 36 to the pointer
* Array variables are immutable pointers
* Pointers can be assigned to array variables, `int *rp =ray`
* i.e. ` ray[3] <==> *(rp + 3)`
* Addition is communitive, so `3[ray]=*(3+ray)=ray[3]=*(ray+3)`
* This also means you can use pointers like array variables (i.e. p[2)]


All funcions are pass by value

Functions are written using `<return type> <name> (<params>)`

```c
double a = 2.3;
foo(a);

void foo(double x) {
    x = 19
}
//x does not change
```
