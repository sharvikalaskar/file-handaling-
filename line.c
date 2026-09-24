#include <stdio.h>
int main(void) {
    FILE *fp = fopen("demo.txt", "r");
    char line[100];

    if (!fp) { printf("No file\n"); return 1; }

    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);
    return 0;
}
