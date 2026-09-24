#include <stdio.h>
int main(void) {
    FILE *fp = fopen("demo.txt", "w");   // "w" = create/overwrite
    if (fp == NULL) { printf("Cannot open file\n"); return 1; }

    fputc('H', fp);
    fputc('i', fp);
    fputc('\n', fp);

    fclose(fp);
    printf("File created: demo.txt\n");
    return 0;
}
