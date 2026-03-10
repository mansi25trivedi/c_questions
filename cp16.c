//input the full name from the user and dispay the initials
#include<stdio.h>
int main(){
    char first[20] , last[20];
    printf("enter your name: ");
    scanf("%s %s", first, last);
    printf("The initials of the given name are: %c %c  ",first[0], last[0]);
    return 0;
}