#include <stdio.h>
#include <string.h>
int main(void) {
    FILE *fp = fopen("demo.txt", "r");
    char line[300], key[50];

    if (!fp) { printf("No file\n"); return 1; }

    printf("Search for: ");
    scanf("%49s", key);

    while (fgets(line, sizeof(line), fp))
        if (strstr(line, key))
            printf("%s", line);

    fclose(fp);
    return 0;
}
