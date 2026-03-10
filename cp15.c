//input the dd mm yyyy from the user andn input it in this format "dd/mm/yyyy"
#include<stdio.h>
int main(){
    int d, m, y;
    printf("enter any date(dd mm yyyy)");
    if(scanf("%d %d %d",&d,&m,&y)== 3){
        printf("the date is : %02d/%02d/%04d",d , m, y);

    }else{
        printf("invalid input : enter in the form of dd mm yyyy");
    }

}