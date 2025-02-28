#include <stdio.h>
int main() {
    char character;
    scanf("%c",&character);
    int n;
    n= (int)character;
    if((n==65)||(n==69)||(n==73)||(n==79)||(n==85)){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}