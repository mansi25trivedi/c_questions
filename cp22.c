//display the numbers in octal and hexa decimal format
#include<stdio.h>
int main(){
    int n;
    printf("enter any number: ");
    scanf("%d", &n);
    printf("in Decimal: %d \n", n);
    printf("in octal: %o  \n",n);
    printf("in hexadecimal: %x  \n", n);
    printf("in hexadecimal(in capital): %X \n", n);
    return 0;
}