#include<stdio.h>
int main(void)
{
    FILE*fp = fopen("demo.txt", "r");
    int ch;
    if(fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)

    putchar(ch);
    fclose(fp);
    return 0;

}
