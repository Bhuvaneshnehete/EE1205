#include <stdio.h>
#include <stdlib.h>

// Function to perform convolution
void convolution(int signal1[], int signal2[], int m, int n, int result[]) {
    int i, j;
    // Convolution length will be (m + n - 1)
    int convolutionLength = m + n - 1;

    // Initialize result array with zeros
    for (i = 0; i < convolutionLength; i++) {
        result[i] = 0;
    }

    // Perform convolution
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            result[i + j] += signal1[i] * signal2[j];
        }
    }
}

int main() {
    // Example signals
    int signal1[] = {0,0,0,0,1,1,1,1,1,1,1,1,2,2,2,2,3,3,3,3,1,1,1,1,0,0,0,0,0,0};
    int signal2[] = {-1,2,-1};

    // Length of the signals
    int m = sizeof(signal1) / sizeof(signal1[0]);
    int n = sizeof(signal2) / sizeof(signal2[0]);

    // Resultant array will have length (m + n - 1)
    int result[m + n - 1];

    // Perform convolution
    convolution(signal1, signal2, m, n, result);

    // Open a file for writing
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the result to the file
    for (int i = 0; i < m + n - 1; i++) {
        fprintf(file, "%d\n", result[i]);
    }

    // Close the file
    fclose(file);

    return 0;
}

