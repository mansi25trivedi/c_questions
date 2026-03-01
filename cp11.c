//input a character and print its ASCI value 
#include<stdio.h>
int main(){
    char c;
    printf("enter any character of your choice:");
    scanf("%c", &c);
    printf("The ASCI value of %c is : %d", c , c);
    printf("***********************************************************************");
    int a;
    printf("give any asci value: ");
    scanf("%d",&a);
    printf("the corrsponding character the the ascii value is : %c",a);
}