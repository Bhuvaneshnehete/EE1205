#include <stdio.h>
#include <math.h>

#define N_MAX 20  // Maximum value of n for calculation

double h(int n) {
    return 0.5;  // Define the sequence h[n]
}

int main() {
    FILE *fp;
    fp = fopen("data33.txt", "w");
    
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    int n;
    double g = 0.0;
    for (n = 0; n <= N_MAX; n++) {
        g += fabs(h(n));  // Calculate g[n] as the sum of |h[n]|
        fprintf(fp, "%d %lf\n", n, g);  // Write n and g[n] to the file
    }
    
    fclose(fp);
    
    return 0;
}

