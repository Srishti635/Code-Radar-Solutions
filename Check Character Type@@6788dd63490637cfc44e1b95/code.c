#include <stdio.h>
int main() {
    char character;
    scanf("%c",&character);
    int n;
    n= (int)character;
    if((n==65)||(n==69)||(n==73)||(n==79)||(n==85)){
        printf("Vowel");
    }
    else if((n<65 && n>90) &&(n<97 && n>122)){
        printf("Digit");

    }
    else{
        printf("Consonant");
    }
    return 0;
}