#include <stdio.h>

char* welcome() {
    float a;
    scanf("%d",&a);
    printf("You entered:%d");
    return a;
}

int main() {
    printf("%s", welcome());
    return 0;
}