#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

        // Iterate through the characters in the input
        for (int i = 0; i < strlen(input); i++)
        {
            // Check if the character is a letter (A-Z or a-z)
            if (isalpha(input[i]))
            {
                // Convert the character to uppercase and calculate its index in the array
                int index = toupper(input[i]) - 'A';
                // Increment the corresponding count in the array
                letterCount[index]++;
            }
        }
    }

    // Display the letter counts
    printf("Letter Counts:\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d\n", 'A' + i, letterCount[i]);
    }

    return 0;
}
