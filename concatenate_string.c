#include<stdio.h>
#include<string.h>
 int main(){
    int i,j;
    char S1[20]="hello";
    char S2[]="world";
    i = strlen(S1);
    j=0;
    while(S2[j]!='\0'){
         S1[i] = S2[j];
         i++;
         j++;
    }
    printf("concatenate two string:%s",S1);
    return 0;
 }