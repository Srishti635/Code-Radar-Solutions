// Your code here...
#include<stdio.h>
int main(){
    int a,b,n,sum,sub,prod;
    scanf("%d %d",&a,&b);
    scanf("%c",&n);
    sum = 0;
    sub = 0;
    prod = 1;
    if(n=='+'){
        sum=a+b;
        printf("%d",sum);
    }
    if(n=='-'){
        sub = a-b;
        printf("%d",sub);
    }
    if(n=='*'){
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