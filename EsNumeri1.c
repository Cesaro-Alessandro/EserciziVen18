#include <stdio.h>
#define dim 50
int main()
{
    int arrayNumeri[dim];
    int numero, contatore = 0, i, j;
    double media;

    printf("Inserisci una sequenza numerica chiusa da uno zero \n");
    do
    {
        scanf("%d", numero);
        arrayNumeri[contatore] = numero;
        contatore++;
    } while (numero != 0);

    for (i = 0; i < contatore; i++)
    {
        media = media + (double)arrayNumeri[i];
    }
    media = media / (double)contatore;

    printf("I numeri stampati al contrario, maggiori delle media sono:");
    for (j = contatore; j >= 0; j--)
    {
        if (arrayNumeri[i] > media)
        {
            printf("%d \n", arrayNumeri[i]);
        }
        
    }
    return 0;
}