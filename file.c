#include<stdio.h>
int main(void)
{
    FILE *fp;
    char str[80];
    fp = fopen("Vishwa.txt", "w");
    fprintf(fp,"hi");
    fclose(fp);
    fp = fopen("Vishwa.txt", "r");
    fscanf(fp, "%s", str);
    printf("\n Hello %s\n", str);
    fclose(fp);


}
