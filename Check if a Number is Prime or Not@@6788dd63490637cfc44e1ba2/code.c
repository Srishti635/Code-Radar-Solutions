// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++){
        if(n%2==0){
            a+=1;
            break;
        }
    }
if(a==1){
    printf("Prime");
}
else{
    printf("Not Prime");
}

}