// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j%2!=0){
                printf("1\n");
            }
            else{
                printf("2");
            }
        }
        printf("\n");
    }
    return 0;
}