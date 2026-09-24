#include<stdio.h>
int main(void)
{
    FILE *p;
    int limit, cnt, sum = 0, x;
    p = fopen("Number.txt", "w");
    printf("Enter the limit: \n");
    scanf("%d", &limit);
    cnt = 1;
    while(cnt < limit)
    {
        printf("Enter the numbers: \n");
        scanf("%d",&x);
        fprintf(p, " %d", x);
        cnt++;
    }
    fclose(p);
    p = fopen("Number.txt", "r");
    while(!feof(p))
    {
        fscanf(p, "%d", &x);
        sum = sum + x;
    }
    printf("Sum: %d\n", sum);
    fclose(p);
   return 0;

}
