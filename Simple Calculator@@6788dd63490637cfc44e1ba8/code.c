// Your code here...
#include<stdio.h>
int main(){
    int a,b,ans;
    char n;
    scanf("%d %d",&a,&b);
    scanf("%c",&n);
    if(n =='+'){
        ans=a+b;
        printf("%d",ans);
    }
    else if(n=='-'){
        ans = a-b;
        printf("%d",ans);
    }
    else if(n=='*'){
        ans = a*b;
        printf("%d",ans);
    }
    else if (n=='/'){
       if(b==0){
        printf("error");
       }
       else{
        ans = a/b;
        printf("%d",ans);
        }
    }
    else{
        printf("error");
    }
    return 0;
}