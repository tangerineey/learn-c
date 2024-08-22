#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    // Since you can omit the inner brackets,
    // this looks like [0][0] = false
    bool in_hand[NUM_SUITS][NUM_RANKS] = { false };
    int num_cards, rank, suit;

    const char rank_code[] = { '2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a' };
    const char suit_code[] = { 'c', 'd', 'h', 's' };

    // Seed the random number generator with the current time
    srand((unsigned)time(NULL));

    printf("Enter the number of cards in hand: ");
    scanf("%d", &num_cards);

    if (num_cards > (NUM_SUITS * NUM_RANKS)) {
        printf("Error: Hand %d exceeds maximum number of unique cards.", num_cards);
        return 1;
    }

    printf("You hand:");
    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");

    return 0;
}
