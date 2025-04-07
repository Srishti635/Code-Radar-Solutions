// Your code here...
#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d %d",&a,&b);
    scanf("%c",&n);
    int sum=a+b;
    int sub=a-b;
    int prod=a*b;
    if(n=='+'){
        printf("%d",sum);
    }
    else if(n=='-'){
        printf("%d",sub);
    }
    else if(n=='*'){
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