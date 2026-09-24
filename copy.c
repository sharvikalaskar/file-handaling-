#include <stdio.h>
int main(void) {
    FILE *src = fopen("demo.txt", "r");
    FILE *dst = fopen("copy.txt", "w");
    int ch;

    if (!src || !dst) { printf("Error opening files\n"); return 1; }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dst);

    fclose(src);
    fclose(dst);
    printf("Copied demo.txt -> copy.txt\n");
    return 0;
}
