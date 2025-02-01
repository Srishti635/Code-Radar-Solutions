#include <stdio.h>

char* welcome() {
    float a;
    scanf("%f",&a);
    printf("You entered:%f",a);
    return;
}

int main() {
    printf("%f", welcome());
    return 0;
}