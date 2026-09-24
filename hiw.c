#include <stdio.h>
int main(void)
 {
    FILE *fp = fopen("demo.txt", "w");
    if (!fp) { printf("Error\n"); return 1; }

    fputs("C programming file handling\n", fp);
    fputs("Second line here\n", fp);

    fclose(fp);
    printf("Written using fputs\n");
    return 0;
}
