#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int  sum (int count,...);
int min(int count,...);
int max(int count,...);

int main()
{

    sum(5,1,2,3,4,5);
    min(3,3,4,5,2);
    max(4,12,9,17,6);

    return 0;
}


int max(int count,...) {
    va_list ptr;
    int i,temp;
    int max=0;

    va_start(ptr,count);

    max=va_arg(ptr,int);

    for(i=0;i<count;i++){
        temp=va_arg(ptr,int);
        if(max<temp){
            max=temp;
        }
    }
    printf("max: %d \r\n",max);
    va_end(ptr);

    return max;
}

int min(int count,...) {
    va_list ptr;
    int i,temp;
    int min=0;

    va_start(ptr,count);

    min=va_arg(ptr,int);

    for(i=0;i<count;i++){
        temp=va_arg(ptr,int);
        if(min>temp){
            min=temp;
        }
    }
    printf("min: %d \r\n",min);
    va_end(ptr);

    return min;
}



int  sum (int count,...) {


        va_list ptr;
        int i;
        int sum=0;

        va_start(ptr,count);

        for(i=0;i<count;i++){
                sum=sum+va_arg(ptr,int);
        }
        va_end(ptr);

        printf("sum: %d \r\n",sum);

        return sum;
}
