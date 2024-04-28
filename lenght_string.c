#include<stdio.h>
#include<string.h>
 int main(){
     int lenght = 0;
     char str[]="hello";
     while(str[lenght]!='\0'){
        lenght++;
     }
     
     printf("Lenght of a string is :%d",lenght);
     return 0;

 }