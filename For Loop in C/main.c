#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void number(int n){
    if(1==n){
        printf("one \r\n");
    }else if(2==n){
        printf("two \r\n");
    }else if(3==n){
        printf("three \r\n");
    }else if(4==n){
        printf("four \r\n");
    }else if(5==n){
        printf("five \r\n");
    }else if(6==n){
        printf("six \r\n");
    }else if(7==n){
        printf("seven \r\n");
    }else if(8==n){
        printf("eight \r\n");
    }else if(9==n){
        printf("nine \r\n");
    }else if(n>9){
        if(0==n%2){
            printf("even\r\n");

        }else{
            printf("odd \r\n");
              }
    }

}


int main()
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

  	for(i=a;i<=b;i++){
           number(i);
  	}

    return 0;
}



