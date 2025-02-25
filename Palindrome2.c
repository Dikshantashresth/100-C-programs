#include <stdio.h>
#include <string.h>

// Function to check palindrome
const char* palindrome(char s[], int len) {
    int last = len - 1;
    int count = 0;
    
    for (int i = 0; i < len / 2; i++) {
        if (s[i] == s[last]) {
            count++;
        }
        last--;
    }

    return (count == len / 2) ? "palindrome" : "not palindrome";
}

int main() {
    char s[20];
    
    // Prompting user for input
    printf("Enter a string: ");
    scanf("%s", s);  // No '&' needed for strings

    int len = strlen(s);
    
    // Proper printf format
    printf("%s\n", palindrome(s, len));

    return 0;
}
