#include <stdio.h>

int main()
{
    int c, i, j, n, soma, cont;
    int turma[1000];
    double media, per;
    
    scanf("%d", &c);
    
    for(i=0;i<c;i++){
        
        per=0;
        soma=0;
        cont=0;
        
        scanf("%d", &n);
        
        for(j=0;j<n;j++){
            scanf("%d", &turma[j]);
            soma += turma[j];
        }
        
        media = (double)soma/n;
        
        for(j=0;j<n;j++){
          if(turma[j]>media){
              cont++;
          }
        }
        
        per = ((double)cont/n)*100.0;
        
        printf("%.3lf%%\n", per);
    }

    return 0;
}