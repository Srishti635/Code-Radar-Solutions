// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count+=1;
    }
        else{
            odd_count+=1;
    }
    }
    printf("%d",even_count);
    printf("%d",odd_count);
    return 0;
}