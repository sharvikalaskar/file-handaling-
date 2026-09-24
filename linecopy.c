#include <stdio.h>
int main(void) {
    FILE *src = fopen("demo.txt", "r");
    FILE *dst = fopen("linecopy.txt", "w");
    char line[200];

    if (!src || !dst) { printf("Error\n"); return 1; }

    while (fgets(line, sizeof(line), src))
        fputs(line, dst);

    fclose(src); fclose(dst);
    printf("Line-by-line copy done\n");
    return 0;
}
