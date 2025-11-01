#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ANSI Color Codes
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

// Snakes & Ladders Board Effects
int snakesAndLadders[101] = {0};

void setupBoard() {
    snakesAndLadders[6] = +40;   // Ladder
    snakesAndLadders[23] = -10;  // Snake
    snakesAndLadders[45] = -7;
    snakesAndLadders[61] = -18;
    snakesAndLadders[65] = -8;
    snakesAndLadders[77] = +5;
    snakesAndLadders[98] = -10;
}

int rollDie() {
    return (rand() % 6) + 1;
}

int movePlayer(int pos, int roll) {
    int next = pos + roll;
    if (next > 100) return pos;
    next += snakesAndLadders[next];
    if (next < 0) next = 0;
    return next;
}

void printBoard(int p1, int p2) {
    printf("\n---------------- SNAKE & LADDER BOARD ----------------\n\n");

    for (int row = 10; row >= 1; row--) {

        if (row % 2 == 0) {
            for (int col = 1; col <= 10; col++) {
                int cell = (row - 1) * 10 + col;

                if (cell == p1) printf(YELLOW " P1 " RESET);
                else if (cell == p2) printf(YELLOW " P2 " RESET);
                else if (snakesAndLadders[cell] > 0) printf(GREEN "%3d " RESET);
                else if (snakesAndLadders[cell] < 0) printf(RED "%3d " RESET);
                else printf("%3d ", cell);
            }
        } else {
            for (int col = 10; col >= 1; col--) {
                int cell = (row - 1) * 10 + col;

                if (cell == p1) printf(YELLOW " P1 " RESET);
                else if (cell == p2) printf(YELLOW " P2 " RESET);
                else if (snakesAndLadders[cell] > 0) printf(GREEN "%3d " RESET);
                else if (snakesAndLadders[cell] < 0) printf(RED "%3d " RESET);
                else printf("%3d ", cell);
            }
        }
        printf("\n");
    }

    printf("\nLEGEND: " YELLOW "P1/P2" RESET " = Players, "
           GREEN "Green" RESET " = Ladder, "
           RED "Red" RESET " = Snake\n");
    printf("-------------------------------------------------------\n\n");
}

void printEffects() {
    printf("Snakes & Ladders:\n");
    for (int i = 1; i <= 100; i++) {
        if (snakesAndLadders[i] > 0)
            printf(GREEN "Ladder: %d -> %d\n" RESET, i, i + snakesAndLadders[i]);
        else if (snakesAndLadders[i] < 0)
            printf(RED   "Snake:  %d -> %d\n" RESET, i, i + snakesAndLadders[i]);
    }
    printf("\n");
}

int main() {
    srand(time(0));
    setupBoard();

    int p1 = 0, p2 = 0, roll;

    printf("\n=== Snake & Ladder (Player 1 vs Player 2) ===\n\n");
    printEffects();
    printBoard(p1, p2);

    while (1) {

        // Player 1 Turn
        printf("Player 1 - Press ENTER to roll.\n");
        getchar();
        roll = rollDie();
        printf("Player 1 rolled: %d\n", roll);
        p1 = movePlayer(p1, roll);
        printBoard(p1, p2);
        if (p1 == 100) { printf(YELLOW "\nPlayer 1 Wins!\n" RESET); break; }

        // Player 2 Turn
        printf("Player 2 - Press ENTER to roll.\n");
        getchar();
        roll = rollDie();
        printf("Player 2 rolled: %d\n", roll);
        p2 = movePlayer(p2, roll);
        printBoard(p1, p2);
        if (p2 == 100) { printf(YELLOW "\nPlayer 2 Wins!\n" RESET); break; }
    }

    return 0;
}
