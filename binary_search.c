#include<stdio.h>
 int main()
 {
    int n , i , l , h , mid , key;
    printf("enter the no of elements");
    scanf("%d",&n);
    int array[n];
    printf("enter the element in sorted sequence\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the searching element");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<=h){
        mid = (l+h)/2;
        if(key==array[mid]){
            printf("%d present at %d location",key , mid);
            break;
        }
        else if (key<array[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
         }
         printf("element not found");
         return 0;
    }

 }
