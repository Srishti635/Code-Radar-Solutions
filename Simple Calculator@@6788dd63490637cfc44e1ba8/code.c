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
    else if(n=='-'){
        sub = a-b;
        printf("%d",sub);
    }
    else if(n=='*'){
        prod = a*b;
        printf("%d",prod);
    }
    else if (n=='/'){
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    }
    return 0;
}