#include <stdio.h>
int main() {
    char n;
    scanf("%c",&n);
    int ascii;
    ascii=(int)n;
    if(ascii>=65 && ascii<=90){
        printf("Uppercase");
    }
    else if(ascii>=97 && ascii<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}