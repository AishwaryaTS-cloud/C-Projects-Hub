#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define COMPUTER 1
#define HUMAN 2
#define SIDE 3

#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'

// Structure for AI move
struct Move {
    int row, col;
};

// ---------------- Minimax Core ---------------- //

char player = 'O', opponent = 'X';

// Check if any move is left
bool isMovesLeft(char board[3][3]) {
    for (int i = 0; i < SIDE; i++)
        for (int j = 0; j < SIDE; j++)
            if (board[i][j] == ' ')
                return true;
    return false;
}

// Evaluate board state
int evaluate(char b[3][3]) {
    // Check rows
    for (int row = 0; row < SIDE; row++) {
        if (b[row][0] == b[row][1] && b[row][1] == b[row][2]) {
            if (b[row][0] == player)
                return +10;
            else if (b[row][0] == opponent)
                return -10;
        }
    }

    // Check columns
    for (int col = 0; col < SIDE; col++) {
        if (b[0][col] == b[1][col] && b[1][col] == b[2][col]) {
            if (b[0][col] == player)
                return +10;
            else if (b[0][col] == opponent)
                return -10;
        }
    }

    // Check diagonals
    if (b[0][0] == b[1][1] && b[1][1] == b[2][2]) {
        if (b[0][0] == player)
            return +10;
        else if (b[0][0] == opponent)
            return -10;
    }

    if (b[0][2] == b[1][1] && b[1][1] == b[2][0]) {
        if (b[0][2] == player)
            return +10;
        else if (b[0][2] == opponent)
            return -10;
    }

    return 0;
}

// Minimax recursive function
int minimax(char board[3][3], int depth, bool isMax) {
    int score = evaluate(board);

    // Win conditions
    if (score == 10)
        return score - depth;  // prefer faster wins
    if (score == -10)
        return score + depth;  // prefer slower losses

    if (!isMovesLeft(board))
        return 0;  // draw

    if (isMax) {
        int best = -1000;
        for (int i = 0; i < SIDE; i++) {
            for (int j = 0; j < SIDE; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = player;
                    best = (best > minimax(board, depth + 1, false)) ? best : minimax(board, depth + 1, false);
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    } else {
        int best = 1000;
        for (int i = 0; i < SIDE; i++) {
            for (int j = 0; j < SIDE; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = opponent;
                    best = (best < minimax(board, depth + 1, true)) ? best : minimax(board, depth + 1, true);
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    }
}

// Find best move for computer
struct Move findBestMove(char board[3][3]) {
    int bestVal = -1000;
    struct Move bestMove = {-1, -1};

    for (int i = 0; i < SIDE; i++) {
        for (int j = 0; j < SIDE; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = player;
                int moveVal = minimax(board, 0, false);
                board[i][j] = ' ';
                if (moveVal > bestVal) {
                    bestMove.row = i;
                    bestMove.col = j;
                    bestVal = moveVal;
                }
            }
        }
    }
    return bestMove;
}

// ---------------- Game Logic ---------------- //

void showBoard(char board[SIDE][SIDE]) {
    printf("\n");
    for (int i = 0; i < SIDE; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i != SIDE - 1)
            printf("---|---|---\n");
    }
    printf("\n");
}

void showInstructions() {
    printf("\nTic-Tac-Toe Game\n");
    printf("Choose a cell numbered from 1 to 9 as shown below:\n\n");
    printf(" 1 | 2 | 3 \n");
    printf("---|---|---\n");
    printf(" 4 | 5 | 6 \n");
    printf("---|---|---\n");
    printf(" 7 | 8 | 9 \n\n");
}

void initialise(char board[SIDE][SIDE]) {
    for (int i = 0; i < SIDE; i++)
        for (int j = 0; j < SIDE; j++)
            board[i][j] = ' ';
}

int rowCrossed(char board[SIDE][SIDE]) {
    for (int i = 0; i < SIDE; i++)
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
    return 0;
}

int columnCrossed(char board[SIDE][SIDE]) {
    for (int i = 0; i < SIDE; i++)
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;
    return 0;
}

int diagonalCrossed(char board[SIDE][SIDE]) {
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' '))
        return 1;
    return 0;
}

int gameOver(char board[SIDE][SIDE]) {
    return (rowCrossed(board) || columnCrossed(board) || diagonalCrossed(board));
}

void declareWinner(int whoseTurn) {
    if (whoseTurn == COMPUTER)
        printf("COMPUTER wins! \n");
    else
        printf("YOU win! \n");
}

void playTicTacToe(int whoseTurn) {
    char board[SIDE][SIDE];
    initialise(board);
    showInstructions();
    showBoard(board);

    int moveIndex = 0;

    while (!gameOver(board) && moveIndex != SIDE * SIDE) {
        if (whoseTurn == COMPUTER) {
            struct Move best = findBestMove(board);
            board[best.row][best.col] = COMPUTERMOVE;
            printf("Computer placed O at cell %d\n", best.row * 3 + best.col + 1);
            showBoard(board);
            moveIndex++;
            if (gameOver(board)) {
                declareWinner(COMPUTER);
                return;
            }
            whoseTurn = HUMAN;
        } else {
            int move;
            printf("Enter your move (1-9): ");
            scanf("%d", &move);
            if (move < 1 || move > 9) {
                printf("Invalid input! Try again.\n");
                continue;
            }
            int x = (move - 1) / SIDE;
            int y = (move - 1) % SIDE;
            if (board[x][y] == ' ') {
                board[x][y] = HUMANMOVE;
                showBoard(board);
                moveIndex++;
                if (gameOver(board)) {
                    declareWinner(HUMAN);
                    return;
                }
                whoseTurn = COMPUTER;
            } else {
                printf("Cell already occupied! Try again.\n");
            }
        }
    }

    printf("It's a draw! \n");
}

// ---------------- Main ---------------- //

int main() {
    printf("Starting Tic-Tac-Toe...\n");
    playTicTacToe(COMPUTER);
    return 0;
}
