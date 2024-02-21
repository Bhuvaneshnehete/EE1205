#include <stdio.h>

int main() {
    FILE *fp;
    int n, k;
    float sum = 0.0;

    fp = fopen("data34.txt", "w");

    for (k = 0; k <= 8; k++) {
        if (k<3){
        	sum += 1.0 / 3.0;
        	fprintf(fp,"%d   %f\n",k, sum);
    	}else{
    		sum += 0;
    		fprintf(fp,"%d   %f\n",k, sum);
    	}
    }

    fclose(fp);

    return 0;
}

