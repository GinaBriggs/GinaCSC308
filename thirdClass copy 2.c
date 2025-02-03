#include <stdio.h>

int main() {
    char ch = 'S';
    
    
    
    if (ch >= 'A' && ch <= 'J') {
        printf("Next 6 characters are: ");
        for (int i = 1; i <= 6; i++) {
            printf("%c ", ch + i);
        }
        printf("\n");
    } else {
        printf("Character out of range. Please enter a character between A and J.\n");
    }
    
    return 0;
}