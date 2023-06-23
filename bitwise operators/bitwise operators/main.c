#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include "main.h"
//Complete the following function.
int max_and=0;
int max_or=0;
int max_xor=0;

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

void calculate_the_maximum(int n, int k) {
  //Write your code here.

    printf("a b and or xor\r\n");
    int i,a,o,x,j;
    for(i=1;i<n;i++){

        for(j=i+1;j<=n;j++){

        printf("\r\n%d %d ",i,j);
        a=logic_and(i,j);
        if((a>max_and)&&(a<k)){
            max_and=a;
        }
        printf(" %d ",a);
        o=logic_or(i,j);
        if((o>max_or)&&(o<k)){
            max_or=o;
        }
        printf(" %d ",o);
        x=logic_xor(i,j);
        if((x>max_xor)&&(x<k)){
            max_xor=x;
        }
        printf(" %d ",x);

        }

    }

    printf("\r\nMax and:%d \r\n",max_and);
    printf("Max or:%d \r\n",max_or);
    printf("Max xor:%d \r\n",max_xor);
}


int logic_and(int x, int y){

    return x&y;
}

int logic_or(int x, int y){

    return x|y;
}

int logic_xor(int x, int y){

    return x^y;
}



void print_2d_array(int *p,int r,int c){

int i,j;
    for(i=0;i<r;i++){

        for(j=0;j<c;j++){
            printf(" %d",*(p+(i*c)+j));
        }
        printf("\r\n");
    }

}


