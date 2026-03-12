//Input 10 numbers print them in reverse order of their input 
#include<stdio.h>
 int main(){
    int n;
    int arr[10];
    printf("enter any 10 numbers:");
    for(int i=0 ; i < 10 ; i++){
        scanf("%d",&n);
        arr[ i ] = n ; }

        for( int j =9 ; j >= 0 ; j--){
            printf("%d ", arr[j]); 
        } 
            return 0;
}