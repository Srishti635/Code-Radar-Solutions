// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a =65;
    for(int i=1;i<=N;i++){
        for(int j=N;j>=1;j--){
            printf("%c ",a);
            a+=1;
        }
        printf("\n");
    }
    return 0;
}