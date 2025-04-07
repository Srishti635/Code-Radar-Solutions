// Your code here...
#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d %d",&a,&b);
    scanf("%c",&n);
    if(n=='+'){
        int sum=0;
        sum=a+b;
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