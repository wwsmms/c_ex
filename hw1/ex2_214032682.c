#include <stdio.h>

int main() {
    int score,true=1;
    int invalid = 0; //invalid_attempts

    while (true) {
        printf("Please enter your exam score (0-100): ");
        score
        if (scanf("%d", &score) != 1) {//not_int
            printf("Invalid input score:\n");
        } else if (score < 0 || score > 100) {
            printf("Invalid input score: %d\n", score);
            invalid++;
        } else {
            switch (score / 10) {
                case 10:
                    printf("Grade: A\nWell Done!\n");
                     break;
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
            break; //exit_valid_score
        }

        if (invalid >= 3) {
            printf("The user has inserted 3 consecutive times an invalid score.\nExiting the program!\n");
            return -1; //quit
        }

        printf("Please enter a new exam score in the range 0-100:\n");
    }

    return 0;
}
