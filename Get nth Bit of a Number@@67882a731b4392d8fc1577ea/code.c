#include <stdio.h>
int main() {
    int a,b,bitvalue;
    scanf("%d %d",&a,&b);
    int value=1<<b;
    bitvalue=(a&value)>>b;
    printf("%d",bitvalue);
    return 0;
}