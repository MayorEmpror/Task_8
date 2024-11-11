#include <stdio.h>

int main() {
    int SCORES[4][4];

    // Input scores for each team and round
    for (int i = 0; i < 4; i++) {  // Use < instead of <= to avoid out-of-bounds
        for (int j = 0; j < 4; j++) {
            printf("Enter score of round %d of team %d: ", j + 1, i + 1);
            scanf("%d", &SCORES[i][j]);
        }
    }

    // Print the scores
    printf("\nScores:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", SCORES[i][j]);
        }
        printf("\n");
    }

    // Sort scores in each round
    for (int j = 0; j < 4; j++) {  // Iterate over rounds
        for (int i = 0; i < 3; i++) {  // Use < 3 to avoid out-of-bounds
            for (int k = 0; k < 3 - i; k++) { // Bubble sort logic
                if (SCORES[k][j] > SCORES[k + 1][j]) {
                    // Swap scores
                    int temp = SCORES[k][j];
                    SCORES[k][j] = SCORES[k + 1][j];
                    SCORES[k + 1][j] = temp;
                }
            }
        }
    }

    // Print the sorted scores
    printf("\nSorted Scores:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", SCORES[i][j]);
        }
        printf("\n");
    }

    return 0;
}
