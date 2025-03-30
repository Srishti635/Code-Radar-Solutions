#include<stdio.h>
int printPrimesinRange(int n){
    int c =0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            break;
            c+=1;
        }
    }
    if(c==1){
        printf("%d",n);
    }
    return n;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        printPrimesinRange(i);
    }
    return 0;
}






