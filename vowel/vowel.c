#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char c;
    int vowels = 0;

    file = fopen("mat.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        }
    }

    fclose(file);

    printf("Number of vowels: %d\n", vowels);

    return 0;
}
