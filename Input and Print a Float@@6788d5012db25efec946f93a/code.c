#include <stdio.h>

char* welcome() {
    float a;
    scanf("%f",&a);
    printf("You entered:%f",a);
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    return 0;
}