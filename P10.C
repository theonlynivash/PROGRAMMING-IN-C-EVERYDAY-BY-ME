#include <stdio.h>

int main() {
    char ch;

    // Ask user for an input character
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Check if the entered character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        // Check for vowels (both uppercase and lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
        
    } else {
        printf("The entered character is not an alphabet.\n");
    }

    return 0;
}
