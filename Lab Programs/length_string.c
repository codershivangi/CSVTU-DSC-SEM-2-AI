#include<stdio.h>
#include<string.h>
 int main(){
     int length = 0;
     char str[]="hello";
     while(str[length]!='\0'){
        length++;
     }
     
     printf("Length of a string is :%d",length);
     return 0;

 }