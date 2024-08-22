#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char upper_char, ch;
    int points = 0;

    printf("Enter a word: ");
    ch = getchar();

    while (ch != '\n') {
        // Point calculation
        upper_char = toupper(ch);

        switch (upper_char) {
        case 'D':
        case 'G':
            points += 2;
            break;
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            points += 3;
            break;
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            points += 4;
            break;
        case 'K':
            points += 5;
            break;
        case 'J':
        case 'X':
            points += 8;
            break;
        case 'Q':
        case 'Z':
            points += 10;
            break;
        default:
            points++;
            break;
        }

        // Get the next character from stream
        ch = getchar();
    }

    printf("Scrabble value: %d\n", points);

    return 0;
}
