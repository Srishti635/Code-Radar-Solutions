// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=N;j>=1;j--){
            printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}