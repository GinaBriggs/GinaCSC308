#include <stdio.h>
int main(){
    //accepts any character, float or integer
    int option;
    printf("Choose input type (1 for character, 2 for float, 3 for integer): "); // option of character,float, int
    scanf(" %d", &option);
    /*prints the next four corresponding characters, floats or integers in multiples of 3*/

    /*Using C Switch statement print the ASCII code and the size of
   the Operator.*/

   switch (option) {
        case '1': {
            // For character input
            char c;
            printf("Insert a character: ");
            scanf(" %c", &c);

            printf("Next four characters in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                printf("Character: %c, ASCII Code: %d\n", ch + i * 3, ch + i * 3);
            }
            printf("Size of char type: %lu bytes\n", sizeof(char));
            break;
        }

        case '2': {
            // For float input
            float f;
            printf("Insert a float: ");
            scanf("%f", &f);

            printf("Next four floats in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                printf("Float: %.2f\n", f + i * 3);
            }
            printf("Size of float type: %lu bytes\n", sizeof(float));
            break;
        }

        case '3': {
            // For integer input
            int n;
            printf("Insert an integer: ");
            scanf("%d", &n);

            printf("Next four integers in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                printf("Integer: %d\n", n + i * 3);
            }
            printf("Size of int type: %lu bytes\n", sizeof(int));
            break;
        }

        default:
            printf("Invalid input type.\n");
            break;
    }

    return 0;
}

