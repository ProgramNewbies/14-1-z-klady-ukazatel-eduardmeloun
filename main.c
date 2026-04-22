#include <stdio.h>

main()
{
    int a;
    int b;
    int c;

    printf("Zadej tri cisla:\n");

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

    printf("Soucet: %d \n", soucet);
    printf("Maximum: %d\n", max);

    if (soucet % 2 == 0)
    {
        printf("Soucet je sudy");
    }
    else
    {
        printf("Soucet je lichy");
    }

    return 0;
}