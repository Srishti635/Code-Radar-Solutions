// Your code here...
#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d %d %c",&a,&b,&n);
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