#include <stdio.h>
int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    printf("Combined string: %s\n", result);
}
