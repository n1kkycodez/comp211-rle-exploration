
#include <stdio.h>
#include <string.h>

int main(void) {
    char input[] = "AAAABBCC";
    int count = 1;

    // Check for an empty string
    if (input[0] == '\0') {
        printf("\n");
        return 0;
    }

    // Compare consecutive characters
    for (int i = 1; input[i] != '\0'; i++) {
        if (input[i] == input[i - 1]) {
            count++;
        } else {
            printf("%d%c", count, input[i - 1]);
            count = 1;
        }
    }

    // Print the final run
    printf("%d%c\n", count, input[strlen(input) - 1]);

    return 0;
}
