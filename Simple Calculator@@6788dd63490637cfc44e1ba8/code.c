// Your code here...
#include<stdio.h>
int main(){
    int a,b,n,sum,sub,prod;
    scanf("%d %d",&a,&b);
    scanf("%c",&n);
    if(n=='+'){
        int sum=0;
        sum=a+b;
        printf("%d",sum);
    }
    if(n=='-'){
        int sub=0;
        sub = a-b;
        printf("%d",sub);
    }
    if(n=='*'){
        int prod = 1;
        prod = a*b;
        printf("%d",prod);
    }
    else{
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    }
    return 0;
}