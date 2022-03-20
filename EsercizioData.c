#include <stdio.h>
#include <string.h>
#define dim 8
int main(int argc, char *argv[])
{
    //printf("%c \n", argv[1][0]);
    char data[dim];
    int cont = 0, dataInt, giorno, mese, anno;
    for(int i = 0; i < dim; i++)
    {
        data[cont] = argv[1][i];
        cont++;
    }
    dataInt = atoi(data);
    giorno = dataInt / 1000000;
    mese = (dataInt / 10000) - (giorno *100);
    anno = dataInt - (dataInt / 10000)*10000;
    //printf("%d \n", giorno);
    //printf("%d \n", mese);
    //printf("%d \n", anno);
    if(giorno <= 31 && mese <= 12 && anno <= 2022)
    {
        printf("%d/%d/%d \n", giorno, mese, anno);
    }
    else
    {
        printf("La data inserita è errata \n");
    }
    return 0;
}