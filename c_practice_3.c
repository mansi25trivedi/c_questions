//to find the largest elemet from the array
#include<stdio.h>
int main(){
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    int max = a[0];
    for(int i =0 ; i<10 ; i++){
        if (max<= a[i]){
            max = a[i];
        }
    }
    printf("\nMaximum element from the array is : %d",max);
}
