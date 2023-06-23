#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LENGTH  50

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[MAX_LENGTH];
    char sen[MAX_LENGTH];


    scanf("%c",&ch);
    scanf("%s\n",s);
    fgets(sen,MAX_LENGTH,stdin);


    printf("%c \r\n",ch);
    printf("%s \r\n",s);
    printf("%s \r\n",sen);





    return 0;
}
