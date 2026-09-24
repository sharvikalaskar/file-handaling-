#include <stdio.h>
int main(void) {
    FILE *fp = fopen("marks.txt", "w");
    if (!fp) { printf("Error\n"); return 1; }

    fprintf(fp, "Ravi 85\n");
    fprintf(fp, "Sita 92\n");
    fprintf(fp, "Arjun 78\n");

    fclose(fp);
    printf("marks.txt created\n");
    return 0;
}
