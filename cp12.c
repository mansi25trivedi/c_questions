//Input numbers until EOF (end of file) and print their total count.
#include<stdio.h>
int main(){
    int n;
    int count = 0;
    printf("enter any number or to stop click ctrl+z for EOF: end of file:");
    while(scanf("%d ",&n) != EOF){
        count++;
        printf("You entered: Number %d: %d\n", count, n);

    }
    printf("the total count: %d",count);

}