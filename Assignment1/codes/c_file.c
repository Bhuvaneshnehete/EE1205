#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Discrete values for n
    for (int n = -10; n < 10; ++n) {
        // Compute the corresponding y value using piecewise function
        double y;
        if (n < 0) {
            y = 0;
        } else {
            y = 2 - 6 * n;
        }

        // Write n and y values to the file
        fprintf(file, "%d %lf\n", n, y);
    }

    // Close the file
    fclose(file);

    return 0;
}