// Your code here...
#include<stdio.h>
int main(){
    int a,b,sum,sub,prod,div;
    char n;
    scanf("%d %d",&a,&b);
    scanf("%c",&n);
    sum = 0;
    sub = 0;
    prod = 1;
    div = 1;
    if(n=='+'){
        sum=a+b;
        printf("%f",sum);
    }
    else if(n=='-'){
        sub = a-b;
        printf("%f",sub);
    }
    else if(n=='*'){
        prod = a*b;
        printf("%f",prod);
    }
    else{
       if(b==0){
        printf("error");
       }
       else{
        div = a/b;
        printf("%f",div);
        }
    }
    return 0;
}