#include <stdio.h>
 
int main()
{
    int a, b, c;
 
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
 
    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;
 
    int soucet = *p_a + *p_b + *p_c;
 
    int max = *p_a;
 
    if (*p_b > max)
    {
        max = *p_b;
    }
 
    if (*p_c > max)
    {
        max = *p_c;
    }
 
    printf("Soucet: %d\nMaximum: %d\n", soucet, max);
 
    if (soucet % 2 == 0)
    {
        printf("Soucet je sudy\n");
    }
    else
    {
        printf("Soucet je lichy\n");
    }
 
    return 0;
}
 