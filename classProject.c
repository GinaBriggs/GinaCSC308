#include <stdio.h>

int main() {
    printf("Welcome to Mama Cas Restaurant\n");
    printf("Here is our Menu:\n P = Poundo Yam/Edinkaiko Sou");

    float csc201, csc205, sta205, total, average, percentage;

    int csc201 = 23;
    int csc205 = 33;
    int sta205 = 26;

    total = csc201 + csc205 + sta205;
    average = total / 3;
    percentage = (total / 300) * 100; 

    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

return 0;
}