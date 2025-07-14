#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char data[100];

    // 1. CREATE and WRITE to a file
    fp = fopen("codtech_file.txt", "w");  // "w" mode creates the file if it doesn't exist
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter text to write into the file:\n");
    fgets(data, sizeof(data), stdin);
    fprintf(fp, "%s", data);
    fclose(fp);
    printf("Data written to codtech_file.txt successfully.\n\n");

    // 2. READ the file
    fp = fopen("codtech_file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("Contents of codtech_file.txt:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }
    fclose(fp);
    printf("\n");

    // 3. APPEND data to the file
    fp = fopen("codtech_file.txt", "a");  // "a" mode appends data
    if (fp == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }
    printf("Enter text to append to the file:\n");
    fgets(data, sizeof(data), stdin);
    fprintf(fp, "%s", data);
    fclose(fp);
    printf("Data appended to codtech_file.txt successfully.\n\n");

    // 4. READ again to show final contents
    fp = fopen("codtech_file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("Final contents of codtech_file.txt:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }
    fclose(fp);

    return 0;
}
