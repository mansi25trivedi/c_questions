//generate multiplication table of a given number
#include<stdio.h>
int main(){
    int n ;
    printf("enter the number you want the table for : ");
    scanf("%d" , &n);
    printf("\nthe table is as follows\n");
    for(int i = 1 ; i<=10 ; i++){
        printf("%d X %d = %d \n" , n , i , n*i);
    }
    return 0;
}
