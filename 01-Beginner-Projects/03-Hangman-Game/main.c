#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORD_LENGTH 50
#define MAX_TRIES 6

// Structure to hold each word and its hint
struct WordWithHint {
    char word[MAX_WORD_LENGTH];
    char hint[MAX_WORD_LENGTH];
};

// Function declarations
void displayWord(const char secretWord[], const bool guessed[]);
void drawHangman(int tries);

int main()
{
    srand(time(NULL));

    // Updated word list — variety of subjects
    struct WordWithHint wordList[] = {
        {"gravity", "Force that pulls objects toward Earth"},
        {"oxygen", "Essential gas for breathing"},
        {"keyboard", "Used to type on a computer"},
        {"volcano", "Mountain that erupts with lava"},
        {"astronaut", "Person who travels into space"},
        {"rainbow", "Seven-colored arc seen after rain"},
        {"algorithm", "Set of rules for solving a problem"},
        {"python", "Popular programming language"},
        {"triangle", "Shape with three sides"},
        {"satellite", "Object orbiting a planet"}
    };

    int wordCount = sizeof(wordList) / sizeof(wordList[0]);
    int wordIndex = rand() % wordCount;

    const char* secretWord = wordList[wordIndex].word;
    const char* hint = wordList[wordIndex].hint;

    int wordLength = strlen(secretWord);
    char guessedWord[MAX_WORD_LENGTH];
    bool guessedLetters[26] = {false};

    for (int i = 0; i < wordLength; i++) {
        guessedWord[i] = '_';
    }
    guessedWord[wordLength] = '\0';

    printf("========================================\n");
    printf("        WELCOME TO HANGMAN GAME \n");
    printf("========================================\n");
    printf("Hint: %s\n", hint);

    int tries = 0;

    while (tries < MAX_TRIES) {
        printf("\n----------------------------------------\n");
        printf("Remaining tries: %d\n", MAX_TRIES - tries);
        displayWord(secretWord, guessedLetters);
        drawHangman(tries);

        char guess;
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        if (!isalpha(guess)) {
            printf("Please enter a valid alphabet letter.\n");
            continue;
        }

        if (guessedLetters[guess - 'a']) {
            printf("You already guessed '%c'. Try a new letter.\n", guess);
            continue;
        }

        guessedLetters[guess - 'a'] = true;

        bool found = false;
        for (int i = 0; i < wordLength; i++) {
            if (secretWord[i] == guess) {
                guessedWord[i] = guess;
                found = true;
            }
        }

        if (found)
            printf("Good guess!\n");
        else {
            printf("The letter '%c' is not in the word.\n", guess);
            tries++;
        }

        if (strcmp(secretWord, guessedWord) == 0) {
            printf("\nCongratulations! You guessed the word: %s\n", secretWord);
            break;
        }
    }

    if (tries >= MAX_TRIES) {
        drawHangman(MAX_TRIES);
        printf("\nGame Over! The correct word was: %s\n", secretWord);
    }

    printf("\nThanks for playing!\n");
    return 0;
}

// Function to show the current guessed letters and blanks
void displayWord(const char secretWord[], const bool guessed[])
{
    printf("Word: ");
    for (int i = 0; secretWord[i] != '\0'; i++) {
        if (guessed[secretWord[i] - 'a'])
            printf("%c ", secretWord[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

// Draw hangman graphics for each failed attempt
void drawHangman(int tries)
{
    const char* hangmanParts[] = {
        "     _________",
        "    |         |",
        "    |         O",
        "    |        /|\\",
        "    |        / \\",
        "    |"
    };

    printf("\n");
    for (int i = 0; i < tries && i < 6; i++) {
        printf("%s\n", hangmanParts[i]);
    }
}
