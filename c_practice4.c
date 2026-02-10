//convert a decimal number to binary
#include<stdio.h>
int main(){
    int n ;
    printf("\nenter number to be converted into binary : ");
    scanf("%d" , &n);
    printf("\n");
    int rem , i = 0 ;
    int arr[100];

    while(n){
        rem = n %2;
        n = n/2;
        arr[i] = rem;
        i++;
    }
     //print arrray in reverse
     for( int j = i-1 ; j >= 0 ; j--)
{
    printf("%d\n" , arr[j]);
}
return 0;
}
