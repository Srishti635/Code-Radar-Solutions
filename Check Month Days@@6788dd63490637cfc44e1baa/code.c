// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N>=1 && N<=12){
        if(N==4 || N==6 || N==9){
            printf("30");
        }
        else if(N==2){
            printf("28");
        }
        else{
            printf("31");
        }
    }
    else {
        printf("Invalid month");
    }
    return 0;
}