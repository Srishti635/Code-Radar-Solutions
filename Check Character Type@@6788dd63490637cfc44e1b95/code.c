#include <stdio.h>
int main() {
    char ch;
    scanf("%d",&ch);
    if(ch>='a' && ch<='z'){
        switch(ch){
            case 'a': case 'e': case 'i':case 'o': case 'u':
            case 'A': case 'E' : case 'I': case 'O' : case 'U':
            printf("Vowel");
            break;
            default:
                printf("Consonant");
        }
    }
    else if(ch>=0 && ch<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}