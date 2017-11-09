#include <stdlib.h>
#include <stdio.h>
void main() {
    char s[200];
    printf("enter data: ");
    fgets(s, sizeof(s), stdin);
    printf("s: %s\n", s);
    int d;
    float f;
    printf("Number of conversions: %d\n", sscanf(s, "%d %f", &d, &f));
    printf("%d \t %f\n", d, f);

}
