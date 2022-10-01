#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[51];
    double preco;
} itens;

typedef struct
{
    char nome[51];
    int quant;
} listas;

int main()
{
    int n, m, p;
    double soma;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        itens item[m];

        for (int j = 0; j < m; j++)
        {
            scanf("%s", item[j].nome);
            scanf("%lf", &item[j].preco);
        }

        scanf("%d", &p);
        listas lista[p];

        for (int j = 0; j < p; j++)
        {
            scanf("%s", lista[j].nome);
            scanf("%d", &lista[j].quant);
        }

        soma = 0;

        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (strcmp(lista[j].nome, item[k].nome) == 0)
                {
                    soma += lista[j].quant * item[k].preco;
                }
            }
        }

        printf("R$ %.2lf\n", soma);
    }

    return 0;
}