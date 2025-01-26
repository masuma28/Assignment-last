#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100]; // Array to store the input word
    int i;

    // Input the word
    printf("Enter a word: ");
    scanf("%s", word);

    printf("Uppercase letters found at positions: ");

    // Loop through each character of the string
    for (i = 0; word[i] != '\0'; i++) {
        if (isupper(word[i])) { // Check if the character is uppercase
            printf("%d ", i); // Print the position
        }
    }

    printf("\n");
    return 0;
}
