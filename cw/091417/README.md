# Aim: Always read the fine print

## Do now: List the primative data types in Java

* boolean

* char/short

* int, float

* long, double


## In C:
* char/short (8bit/16bit)

* int/float (32bit)

* double/long (64bit sort of)


HOWEVER, ALL OF THESE can very depending on the computer. You can use `sizeof(<TYPE>)` to figure  it out

Floats give 7 digits of precision
Doubles give 14 digits

Single-preciesion uses 4 bits for the exponent, meaning it can go to 2^128

`printf(<string literal>, <var1>, <var2>, <var3>);`
<var> args not required


Uses StringFormatting for example:

```C

int i = 5;
printf("i is %d\n", i);
printf("s is %s\n",s);

```

* int - %d
* long - %ld
* float - %f
* double - %lf
* %0.<x>f will provide x digits after the floating point
* char - %c
* char array - %s
* pointer - %p
