//input 5 floating values and pritn it with 4 decimal places
#include<stdio.h>
int main(){
    float n;
    printf("enter any 5 float values: ");
    for(int i = 0; i < 5; i++){
        scanf("%f", &n);
        printf("%0.4f\n",n);
    }
    return 0;
}