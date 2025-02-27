
#include <stdio.h>
#include <string.h>

#define WORD_LENGTH 5
#define MAX_WORD_SIZE 100

int main() {
    FILE *inputFile, *outputFile;
    char word[MAX_WORD_SIZE];

    // Open the input file for reading
    inputFile = fopen("words.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

    // Read words from the input file one by one
    while (fscanf(inputFile, "%s", word) != EOF) {
        // Check if the length of the word is exactly 5
        if (strlen(word) == WORD_LENGTH) {
            // Write the word to the output file followed by a newline
            fprintf(outputFile, "%s\n", word);
        }
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("Process completed! Words of length 5 are written to output.txt.\n");

    return 0;
}



