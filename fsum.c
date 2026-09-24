#include <stdio.h>
int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    int n, count = 0, sum = 0;

    if (!fp) { printf("No numbers.txt\n"); return 1; }

    while (fscanf(fp, "%d", &n) == 1) {
        sum += n;
        count++;
    }
    fclose(fp);

    if (count) printf("Sum = %d, Average = %.2f\n", sum, (float)sum / count);
    else       printf("File is empty\n");
    return 0;
}
