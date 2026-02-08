//sum of first n natural numbers
#include<stdio.h>
int main(){
    int n;
    printf("enter any number you want the sum of : ");
    scanf("%d" , &n);
    int sum = 0;
    /*for (int i = 1 ; i<=n ; i++){
        sum += i;
    } */

    sum = (n*(n+1))/2;
    printf("the sum of first n natural no is %d" , sum);
}
