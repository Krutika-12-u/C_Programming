#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void CheckCharacterType(char cValue)
{
    if (isupper(cValue))
    {
        printf("Uppercase Alphabet\n");
    }
    else if (islower(cValue))
    {
        printf("Lowercase Alphabet\n");
    }
    else if (isdigit(cValue))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}