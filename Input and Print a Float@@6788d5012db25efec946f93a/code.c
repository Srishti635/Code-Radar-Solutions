#include <stdio.h>

void welcome() {
    float a;
    scanf("%f",&a);
    printf("You entered:%f",a);
    
}

int main() {
    printf("%s", welcome());
    return 0;
}