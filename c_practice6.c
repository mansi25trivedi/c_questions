//reverse a number

#include<stdio.h>
int main(){
    int n;
    printf("enter any number : ");
    scanf("%d",&n);
    int rem;
    int i = 0 ;
    int a[100];
    while(n){
       rem = n % 10;
       n = n / 10;
       a[i] = rem;
       i++;
    }
    for(int j = 0 ; j<i ; j++){
        printf("%d ",a[j]);
    }
}
