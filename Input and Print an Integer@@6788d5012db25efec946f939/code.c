#include <stdio.h>

char* welcome() {
    float a;
    scanf("%d",&a);
    printf("You entered:%d",10);
    return "Welcome to code radar";
}

int main() {
    printf("%s", welcome());
    return 0;
}