#include <stdio.h>
#include <stdlib.h>


void update(int *a,int *b) {
    int temp_a=0;
    int temp_b=0;
    temp_a= (*a)+(*b);
    temp_b=abs((*a)-(*b));

    *a=temp_a;
    *b=temp_b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
