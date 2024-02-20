#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data32.txt", "w");
    
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    int n;
    for (n = 0; n <= 8; n++) {
        if (n <= 0)
            fprintf(fp, "%d %d\n", n, 1);
        else if (n >= 1)
            fprintf(fp, "%d %d\n", n, -1);
    }
    
    fclose(fp);
    
    return 0;
}

