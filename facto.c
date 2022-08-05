#include <stdio.h>
long factorial(int y)
{
    int i;
    long facto = 1;

    for (i = 1; i <= y; i++)
        facto = facto * i;

    return facto;
}

int main()
{
    int nb;

    printf("veuillez faire entrer le nombre pour calculer sa factorielle :\n");
    scanf("%d", &nb);
    if (nb == 0)
    {
        printf("%d!=1", nb);
    }
    else if (nb < 0)
    {
        printf("ce nest pas possible de calculer factorielle de %d", nb);
    }
    else
        printf("%d! = %ld\n", nb, factorial(nb));

    return 0;
}