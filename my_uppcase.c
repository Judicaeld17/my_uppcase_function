// Description
// Create a my_upcase function that takes a string as a parameter and returns the uppercase version of it.
#include<ctype.h>
char* my_upcase(char* str){
    char* temp =str;
    while(*temp!='\0'){
        if(*temp>= 'a'){
           *temp=*temp-'a'+'A';
        }
        temp++;
    }
    return str;
}