#include <stdio.h>
int main() {
    int j = 0b100;
    int * ip;
    char * cp;
    double * dp;
    ip= &j;
    printf("size of ip: %lu\n", sizeof(ip));
    printf("value of j: %d\n", j);
    printf("location of j: %p\n", ip);
}
