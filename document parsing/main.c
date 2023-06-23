#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char**** document = {{{"Learning", "C", "is", "fun"}}, {{"Learning", "pointers", "is", "more", "fun"}, {"It", "is", "good", "to", "have", "pointers"}}};
   char** first_sentence_in_first_paragraph = {"Learning", "C", "is", "fun"};
   printf("%p",first_sentence_in_first_paragraph[0]);


    return 0;
}
