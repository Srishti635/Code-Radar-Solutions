#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if((a%4==0 && a%100!=0)|| (a%400==0)){
        if(a==1900){
        printf("Not a Leap Year");
        }
        else{
            printf("Leap Year");
        }
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}