#include <stdio.h>
#include <stdlib.h>

void merge_files(const char *file1_path, const char *file2_path, const char *file3_path) {
    FILE *file1, *file2, *file3;
    char line[256];
    int line_num;

    // Open file1 for reading
    file1 = fopen(file1_path, "r");
    if (file1 == NULL) {
        perror("Error opening file1");
        return;
    }

    // Open file2 for reading
    file2 = fopen(file2_path, "r");
    if (file2 == NULL) {
        perror("Error opening file2");
        fclose(file1);
        return;
    }

    // Open file3 for writing
    file3 = fopen(file3_path, "w");
    if (file3 == NULL) {
        perror("Error opening file3");
        fclose(file1);
        fclose(file2);
        return;
    }

    // Copy lines 20 to 80 from file1 (1-based index, so 19-79 in 0-based)
    line_num = 1;
    while (fgets(line, sizeof(line), file1)) {
        if (line_num >= 20 && line_num <= 80) {
            fputs(line, file3);
        }
        line_num++;
    }

    // Reset file1 pointer to the beginning
    rewind(file1);

    // Copy lines 50 to 90 from file2 (1-based index, so 49-89 in 0-based)
    line_num = 1;
    while (fgets(line, sizeof(line), file2)) {
        if (line_num >= 50 && line_num <= 90) {
            fputs(line, file3);
        }
        line_num++;
    }

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    printf("Content successfully merged into %s.\n", file3_path);
}

int main() {
    // Example usage of the merge function
    merge_files("file1.txt", "file2.txt", "file3.txt");
    return 0;
}

