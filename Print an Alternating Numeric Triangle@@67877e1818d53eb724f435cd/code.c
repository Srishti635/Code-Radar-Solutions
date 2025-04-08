// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a = 1;
    for(int i=1;i<=N;i++){
        if(i==1){
            printf("%d",a);
        }
        else{
        for(int j=1;j<=i;j++){
            if(j%2==0){
                 a=1;
                 printf("%d ",a);
            }
            else{
                a=0;
                printf("%d ",a);
            }
        }
        printf("\n");
    }
    }
    return 0;
}