#include <stdio.h>

int main(){
    float vet_faturamento[]={22174.1664,24537.6698,26139.6134,0.0,0.0,26742.6612,0.0,
                            42889.2258,46251.174,11191.4722,0.0,0.0,3847.4823,373.7838,
                            2659.7563,48924.2448,18419.2614,0.0,0.0,35240.1826,43829.1667,
                            18235.6852,4355.0662,13327.1025,0.0,0.0,25681.8318,1718.1221,13220.495
                            ,8414.61};

    float media,menor = vet_faturamento[0], maior = vet_faturamento[0],soma;
    int i, count=0,dias=0;
    for (i = 0; i < 30; i++)
    {
        if (vet_faturamento[i]>0)
        {
            count++;
        }
    }
    for (i = 0; i < 30; i++)
    {
        if (menor > vet_faturamento[i] && vet_faturamento[i] > 0.0)
        {
            menor = vet_faturamento[i];
        }
    }
    for (i = 0; i < 30; i++)
    {
        if (maior < vet_faturamento[i])
        {
            maior = vet_faturamento[i];
        }
    }
    for (i = 0; i < 30; i++)
    {
        soma = soma + vet_faturamento[i];
    }
    media = soma/count;
    for (i = 0; i < 30; i++)
    {
        if (vet_faturamento[i]>media)
        {
            dias++;
        }
    }

    printf("o menor valor de faturamento foi:%f\n",menor);
    printf("o maior valor de faturamento foi:%f\n",maior);
    printf("dias no mes em que o valor de faturamento diario foi superior a media mensal:%d\n",dias);

    return 0;
}
