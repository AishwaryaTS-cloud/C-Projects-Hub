//Rock-Paper-Scissors Game in C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to determine the winner
// Returns 1 if user wins, 0 if user loses, -1 if draw
int game(char you, char computer) {
    if (you == computer)
        return -1; // Draw
    if ((you == 'r' && computer == 's') ||
        (you == 'p' && computer == 'r') ||
        (you == 's' && computer == 'p'))
        return 1; // User wins
    return 0;     // User loses
}

int main() {
    char you, computer;
    int n;

    // Initialize random seed
    srand(time(NULL));
    n = rand() % 3; // 0,1,2

    // Map random number to computer choice
    if (n == 0)
        computer = 'r';
    else if (n == 1)
        computer = 'p';
    else
        computer = 's';

    // Instructions
    printf("\nWelcome to Rock-Paper-Scissors!\n");
    printf("Enter your choice: r = Rock, p = Paper, s = Scissors\nYour choice: ");
    scanf(" %c", &you); // Space before %c to ignore newline

    // Play the game
    int result = game(you, computer);

    // Print choices
    printf("\nYou chose: %c\nComputer chose: %c\n", you, computer);

    // Print result
    if (result == 1)
        printf("Congratulations! You won the game!\n");
    else if (result == 0)
        printf("Sorry! You lost the game.\n");
    else
        printf("It's a draw!\n");

    return 0;
}
