#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Nh?p chu?i: ");
    fgets(str, sizeof(str), stdin);
    int newWord = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            if (newWord) {
                str[i] = toupper(str[i]);
                newWord = 0;        
            }
        } else { 
            newWord = 1; 
        }
    }
    printf("Chu?i sau khi vi?t hoa ch? cái d?u: %s", str);

    return 0;
}
