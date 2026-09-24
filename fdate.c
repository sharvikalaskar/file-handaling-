#include <stdio.h>
int main(void) {
    FILE *fp = fopen("numbers.dat", "rb");
    int a[5], i;

    if (!fp) { printf("Run program 17 first\n"); return 1; }

    fread(a, sizeof(int), 5, fp);    // reads 5 integers

    for (i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\n");

    fclose(fp);
    return 0;
}
