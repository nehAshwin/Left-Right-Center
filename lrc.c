#include "names.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //variables num_players and seed
    int num_players = 3;
    unsigned seed = 4823;
    typedef enum { DOT, LEFT, CENTER, RIGHT } Position;
    const Position die[6] = { DOT, DOT, DOT, LEFT, CENTER, RIGHT };
    bool winner = false;

    //user input & assigning num_players
    printf("Number of players (3 to 10)? ");
    int scanf_result = scanf("%d", &num_players);

    if (scanf_result < 1 || num_players < 3 || num_players > 10) {
        fprintf(stderr, "Invalid number of players. Using 3 instead.\n");
        num_players = 3;
    }

    //user input & assigning seed
    printf("Random-number seed? ");
    scanf_result = scanf("%u", &seed);

    if (scanf_result < 1) {
        fprintf(stderr, "Invalid seed. Using 4823 instead.\n");
        seed = 4823;
    }

    srandom(seed);
    //creating array and inputting values 3 to each element
    int coins[num_players];
    for (int i = 0; i < num_players; ++i) {
        coins[i] = 3;
    }
    int player = 0;

    while (!winner) {
        if (coins[player] != 0) {
            printf("%s: ", player_name[player]);
            int max = 3;
            if (coins[player] < 3) {
                max = coins[player];
            }
            for (int j = 0; j < max; ++j) {
                int val = random() % 6;
                Position roll = die[val];
                if (roll == LEFT) {
                    if (player == num_players - 1) {
                        coins[player] -= 1;
                        coins[0] += 1;
                    } else {
                        coins[player] -= 1;
                        coins[player + 1] += 1;
                    }
                } else if (roll == RIGHT) {
                    if (player == 0) {
                        coins[player] -= 1;
                        coins[num_players - 1] += 1;
                    } else {
                        coins[player] -= 1;
                        coins[player - 1] += 1;
                    }
                } else if (roll == CENTER) {
                    coins[player] -= 1;
                }
            }
            printf("ends her turn with %d\n", coins[player]);
        }
        int zeroes = 0;
        int winnerIndex = 0;
        for (int k = 0; k < num_players; ++k) {
            if (coins[k] == 0) {
                zeroes++;
            } else {
                winnerIndex = k;
            }
        }
        if (zeroes == num_players - 1) {
            winner = true;
            printf("%s won!\n", player_name[winnerIndex]);
        } else {
            if (player == num_players - 1) {
                player = 0;
            } else {
                player++;
            }
        }
    }

    return 0;
}

