#include <stdio.h>
int main(void) {
    FILE *fp = fopen("demo.txt", "a");   // "a" = add at end, keep old data
    if (!fp) { printf("Error\n"); return 1; }

    fputs("This line was appended later.\n", fp);
    fclose(fp);

    printf("Appended successfully\n");
    return 0;
}
