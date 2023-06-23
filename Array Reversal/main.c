#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,j;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }



    for(j=0;j<num/2;j++){
        int temp=arr[num-1-j];
        arr[num-1-j]=arr[j];
        arr[j]=temp;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
