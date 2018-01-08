# Aim: C, the ultimate hipster, using # decades before it was cool.


# 
Used to provided preprocessor instructions. These directives are handled by gcc first.

\# define <NAME> <VALUE>
replace all occurances of NAME with VALUE.
macros:
   \#  SQUARE(x) x * x

if you say int y = SQUARE(9); ==> int y= 9*9;

```c
#ifndef <IDENTIFIER>
<CODED>
#endif
```

If IDENTIFIER isn't defined, do everything in code, if not do other stuff.
