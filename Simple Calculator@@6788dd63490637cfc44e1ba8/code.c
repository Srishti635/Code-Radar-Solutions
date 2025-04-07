// Your code here...
#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d %d",&a,&b,);
    scanf("%c",&n);
    if(n=='+'){
        printf("%d",a+b);
    }
    else if(n=='-'){
        printf("%d",a-b);
    }
    else if(n=='*'){
        printf("%d",a*b);
    }
    else{
        printf("%d",a/b);
    }
    return 0;
}