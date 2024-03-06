#include <stdio.h>
#include <stdlib.h>

void convolution(int signal1[], int signal2[], int m, int n, int result[]) {
    int i, j;

    int convolutionLength = m + n - 1;

    for (i = 0; i < convolutionLength; i++) {
        result[i] = 0;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            result[i + j] += signal1[i] * signal2[j];
        }
    }
}

int main() {

    int signal1[] = {0,0,0,0,1,1,1,1,1,1,1,1,2,2,2,2,3,3,3,3,1,1,1,1,0,0,0,0,0,0};
    int signal2[] = {-1,2,-1};

    int m = sizeof(signal1) / sizeof(signal1[0]);
    int n = sizeof(signal2) / sizeof(signal2[0]);

    int result[m + n - 1];
	
	int counter;

    convolution(signal1, signal2, m, n, result);

    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < m + n - 1; i++) {
        fprintf(file, "%d\n", result[i]);
    }
	
	for (int i=0; i<m+n-1; i++) {
		if(result[i]!=0) {
			counter++;
		}
	}
	
	printf("The number of non-zero output samples is %d\n",counter);
    fclose(file);

    return 0;
}

