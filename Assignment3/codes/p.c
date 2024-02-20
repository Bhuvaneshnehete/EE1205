#include<stdio.h>
#include<math.h>

int ap_values(int n){
        return pow(2,n) * (n >= 0);
}

int main() {
    FILE *file = fopen("data31.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int n = -5; n <= 10; n++) {
            fprintf(file, "%d     %d \n", n, ap_values(n));
    }
    
    fclose(file); 
    return 0;
}

