#include <stdio.h>

int main() {
    char str[100];
    int i;


    printf("Enter a string: ");
    gets(str);

    printf("Individual characters:\n");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
