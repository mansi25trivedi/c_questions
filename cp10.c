//WAP to input your name and output "hello, <name>"
#include<stdio.h>
int main(){
  char name[20];
printf("Enter your name: ");
scanf("%s",name);                //no & operator(address operator) used for taking input for %s format specifier as string 
printf("Hello, %s", name);
}
