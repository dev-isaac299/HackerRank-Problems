#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,sum=0;
    scanf("%d",&n);
    int* ptr=malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        scanf("%d",ptr);
        sum=sum+(*ptr);
        ptr++;
    }
    printf("%d",sum);

    return 0;
}
