#include <stdio.h>
int str_len(char * str) {
    int i = -1;
    while ((str[++i]));
    return i;
}

void main() {
    char * s = "hello";
    char * s0 = "";
    printf("Length of \"%s\": %d\n", s, str_len(s)); 
    printf("Length of \"%s\": %d\n", s0, str_len(s0)); 
}
