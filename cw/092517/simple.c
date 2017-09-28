#include <stdio.h>


int normsq(int p, int d) {
    return (p*p)+(d*d);
}
int main() {
    int p = 5;
    int d = 5;
    int magsq;
    magsq= normsq(p,d);
    printf("norm([%d;%d]) = %d\n", p, d, magsq);
}

