#include<stdio.h>
int main(){
    int n ;
    printf("enter the number: ");
    scanf("%d" , &n);
    int rem;
    int  i = 2;
     int is_prime = 1 ;
     if(n ==0 || n == 1 ){
        is_prime = 0;
     }
    while((i < n) && (is_prime == 1)){
        rem = n% i ;
        i++;
        if(rem == 0){
            is_prime = 0;
        }
    }

    if(is_prime ){
        printf("\nthe number is prime");
    }else{
        printf("\nthe number is not prime");
    }

    }
/*
#include<stdio.h>
int check_prime(int n){
    int rem , i = 2;
    int a[100];
    int is_prime = 1 ;

    while(i<=n-1 && is_prime==1){
        rem = n%i;
        i++;
        if(rem == 0){
            is_prime = 0;

        }
    }
    return is_prime;

}
int main(){
    int n = 23;
    int result = check_prime(n);

    if(result==0)
    printf("the number is not prime");
    else
    printf("prime");

    return 0 ;
}

*/
