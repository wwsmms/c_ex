#include <stdio.h>

int main() {
    int score;
    int invalid_attempts = 0; // Track invalid attempts

    while (1) {
        printf("Please enter your exam score (0-100): ");
        if (scanf("%d", &score) != 1) {
            // If input is not an integer
            printf("Invalid input score: Non-integer value\n");
            while (getchar() != '\n'); // Clear input buffer
            invalid_attempts++;
        } else if (score < 0 || score > 100) {
            // If score is out of range
            printf("Invalid input score: %d\n", score);
            invalid_attempts++;
        } else {
            // Valid score, determine grade and feedback using switch
            switch (score / 10) {
                case 10: // Fallthrough for scores 100
                case 9:
                    printf("Grade: A\nWell Done!\n");
                    break;
                case 8:
                    printf("Grade: B\nGood job! There is room for improvement.\n");
                    break;
                case 7:
                    printf("Grade: C\nNot bad! But you can do better..\n");
                    break;
                case 6:
                    printf("Grade: D\nYou passed, but you need work harder next time!\n");
                    break;
                case 5:
                    printf("Grade: E\nYou barely passed - please review the material once again.\n");
                    break;
                default:
                    printf("Grade: F\nYou failed, better luck next time!\n");
                    break;
            }
            break; // Exit the loop for a valid score
        }

        if (invalid_attempts >= 3) {
            printf("The user has inserted 3 consecutive times an invalid score.\nExiting the program!\n");
            return 1; // Exit the program
        }

        printf("Please enter a new exam score in the range 0-100:\n");
    }

    return 0; // Successful execution
}
