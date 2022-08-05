#include <stdio.h>
int main(){

int nb, i, f = 1;
 
  printf("faire entrer le nombre qu vou voulais calculer sa factorielle:\n");
  scanf("%d", &nb);
 if (nb == 0)
    {
        printf("%d!=1", nb);
    }
    else if (nb < 0)
    {
        printf("ce nest pas possible de calculer factorielle de %d", nb);
    }
    else{ 
  for (i = 1; i <= nb; i++)
    f = f * i;
 
  printf("la Factorielle de %d = %d\n", nb, f);
 
  return 0;
  }
}


