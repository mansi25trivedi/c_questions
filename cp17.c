//input string and print the uppercase as output
#include<stdio.h>
int main(){
char s[100];
printf("enter any string in lowercase: ");
scanf("%s", s);
int i =0;
while( s[i ]!= '\0' ){
    s[ i ] = s[ i ] - 32;
    i++;
}
 printf("The given string in uppercase: %s ", s );
 return 0;
}