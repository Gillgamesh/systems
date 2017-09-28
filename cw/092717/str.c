#include <stdio.h>
void main() {
    "hello";
    char * s = "hello";
    char s1[] = "hello";
    char * s0 = s1;
    *(s1+3) = 0;
    printf("s points to: %p\n", s);
    printf("s0 points to: %p\n", s0);
    printf("s is %s\n", s);
    printf("s1 is %s\n", s1);
    printf("address of \"hello\": %p\n",&"hello");
    printf("ctrl c to exit\n");
    while (1);
}
