#include <stdio.h>
#include <ctype.h> // For islower()

// User-defined function to count lowercase letters
int countLowercase(const char *word) {
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if (islower(word[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char word[100];
    int lowercaseCount;

    // Input the word
    printf("Enter a word: ");
    scanf("%s", word);

    // Call the user-defined function
    lowercaseCount = countLowercase(word);

    // Display the result
    printf("Number of lowercase letters in '%s': %d\n", word, lowercaseCount);

    return 0;
}
