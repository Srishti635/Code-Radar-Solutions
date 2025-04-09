// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(i==1){
            printf("1\n");
        }
        else{
        for(int j=1;j<=i;j++){
            if(j%2!=0){
                printf("0 ");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    }
    return 0;
}