#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

char data[DATA_SIZE]="\0";
int freq[10];

int main()
{
    int i=0;
    int j=0;
    scanf("%s",data);

    for(i=0;i<strlen(data);i++){

            if('0'==data[i]){
                freq[0]++;
            }else if('1'==data[i]){
                freq[1]++;
            }else if('2'==data[i]){
                freq[2]++;
            }else if('3'==data[i]){
                freq[3]++;
            }else if('4'==data[i]){
                freq[4]++;
            }else if('5'==data[i]){
                freq[5]++;
            }else if('6'==data[i]){
                freq[6]++;
            }else if('7'==data[i]){
                freq[7]++;
            }else if('8'==data[i]){
                freq[8]++;
            }else if('9'==data[i]){
                freq[9]++;
            }

    }

    for(j=0;j<10;j++){
        printf("%d ",*(freq+j));
    }
;
    return 0;
}
