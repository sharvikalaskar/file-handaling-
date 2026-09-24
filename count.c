#include <stdio.h>
int main(void) {
    FILE *fp = fopen("demo.txt", "r");
    int ch, chars = 0, words = 0, lines = 0, inWord = 0;

    if (!fp) { printf("No file\n"); return 1; }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
            inWord = 0;
        else if (!inWord) { inWord = 1; words++; }
    }
    fclose(fp);

    printf("Characters = %d\nWords = %d\nLines = %d\n", chars, words, lines);
    return 0;
}
