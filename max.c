#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    // Check if at least one number is entered
    if (argc < 2) {
        printf("Usage: %s num1 num2 num3 ...\n", argv[0]);
        return 1;
    }

    int max = atoi(argv[1]);  // Convert first argument to integer

    // Loop through remaining arguments
    for (int i = 2; i < argc; i++) {
        int num = atoi(argv[i]);
        if (num > max) {
            max = num;
        }
    }

    printf("Maximum number is: %d\n", max);

    return 0;
}