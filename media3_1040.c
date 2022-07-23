#include <stdio.h>

int main()
{

    float n1, n2, n3, n4, media, notaEx, mediaFin;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    media = (2 * n1 + 3 * n2 + 4 * n3 + 1 * n4) / 10.0;
    printf("Media: %.1f\n", media);

    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if (media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if (media >= 5.0 && media < 7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &notaEx);
        printf("Nota do exame: %.1f\n", notaEx);

        mediaFin = (media + notaEx) / 2.0;
        if (mediaFin >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", mediaFin);
    }

    return 0;
}