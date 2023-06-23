#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void lexicographic_sort(const char* a, const char* b);
void lexicographic_sort_reverse(const char* a, const char* b);
void sort_by_number_of_distinct_characters(const char* a, const char* b);
void sort_by_length(const char* a, const char* b);

void myfunction(void (*f)(int)){
    int i;
    for(i=0;i<5;i++){
        (*f)(i);
    }

}


void print_number(int n){
    printf("%d \r\n",n);
}


int main()
{

    char x[20]="abv";
    char y[20]="fekls";
    char a[20]="bat";
    char b[20]="batman";



    //sort_by_length(x,y);
    //sort_by_number_of_distinct_characters(x,y);
    //lexicographic_sort_reverse(a,b);

    myfunction(print_number);




    return 0;
}







void lexicographic_sort(const char* a, const char* b) {

    int i,len_a,len_b,min_len;

    len_a=strlen(a);
    len_b=strlen(b);

    if(len_a>len_b){
        min_len=len_b;
    }else{
        min_len=len_a;
    }

    for(i=0;i<min_len;i++){
        if(a[i]>b[i]){
            printf("%s \r\n",a);
            printf("%s \r\n",b);
            break;
        }else if(a[i]<b[i]){
            printf("%s \r\n",b);
            printf("%s \r\n",a);
            break;
        }
        if((min_len-1)==i){

            if(strlen(a)>strlen(b)){
            printf("%s \r\n",b);
            printf("%s \r\n",a);
                }else{
                    printf("%s \r\n",a);
                    printf("%s \r\n",b);

            }
        }
    }

}


void lexicographic_sort_reverse(const char* a, const char* b) {

    int i,len_a,len_b,min_len;

    len_a=strlen(a);
    len_b=strlen(b);

    if(len_a>len_b){
        min_len=len_b;
    }else{
        min_len=len_a;
    }

    for(i=0;i<min_len;i++){
        if(a[i]>b[i]){
            printf("%s \r\n",b);
            printf("%s \r\n",a);
            break;
        }else if(a[i]<b[i]){
            printf("%s \r\n",a);
            printf("%s \r\n",b);
            break;
        }
        if((min_len-1)==i){

            if(strlen(a)>strlen(b)){
            printf("%s \r\n",a);
            printf("%s \r\n",b);
                }else{
                    printf("%s \r\n",b);
                    printf("%s \r\n",a);

            }
        }
    }

}


void sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int chars_a=0;
    int chars_b=0;
    int i,j,x,temp,index,max_count=97+26;
    int eng_a[26];
    int eng_b[26];

    memset(eng_a,0,sizeof(eng_a));

    for(i=0;i<strlen(a);i++){
            for(j=97;j<max_count;j++){
                temp=(int)a[i];
                if(j==temp){
                        index=j-97;
                        eng_a[index]=1;
                    }
            }
    }

    for(x=0;x<26;x++){
        chars_a=chars_a+eng_a[x];
    }
    printf("%d \r\n",chars_a);


    memset(eng_b,0,sizeof(eng_b));

        for(i=0;i<strlen(b);i++){
            for(j=97;j<max_count;j++){
                temp=(int)b[i];
                if(j==temp){
                        index=j-97;
                        eng_b[index]=1;
                    }
            }
    }

    for(x=0;x<26;x++){
        chars_b=chars_b+eng_b[x];
    }
    printf("%d \r\n",chars_b);



}


void sort_by_length(const char* a, const char* b) {
    int len_a=0;
    int len_b=0;

    len_a=strlen(a);
    len_b=strlen(b);
    if(len_a>=len_b){
        printf("%s \r\n",a);
        printf("%s \r\n",b);

    }else{
        printf("%s \r\n",b);
        printf("%s \r\n",a);
    }


}


