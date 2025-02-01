#include <stdio.h>

char* welcome() {
    float a;
    scanf("%f",&a);
    printf("You entered:%f",a);
    return 0;
}

int main() {
    printf("%s", welcome());
    return 0;
}