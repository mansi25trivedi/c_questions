//input the marks of 5 subjects and display percentage
#include<stdio.h>
int main(){
    float s1, s2, s3, s4, s5, p, total=500;
    printf("ente rthe marks of 5 subjects : ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    float s = s1 + s2 + s3 + s4 + s5;
    p = s * 100 / total ;
    printf("the percentage is : %0.2f  ", p);

}