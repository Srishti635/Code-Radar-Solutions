// Your code here...
#include<stdio.h>
int main(){
    int a,b,n,sum,sub,prod,div;
    scanf("%d %d",&a,&b);
    scanf("%c",&n);
    sum = 0;
    sub = 0;
    prod = 1;
    div = 1;
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
    else{
       if(b==0){
        printf("%d","error");
       }
       else{
        div = a/b;
        printf("%d",div);
        }
    }
    return 0;
}