#include <stdio.h>
#include <string.h>

int main(){
    
    char frase[10001], frase2[10001];
    int n,i,j;
    long long int soma;
    char ze = 'z';
    char A = 'a';
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf(" %s", frase);
        scanf(" %s", frase2);
        
        soma=0;
        for(j=0;j<strlen(frase);j++){
            if((int)frase[j]<=(int)frase2[j]){
                soma += (int)frase2[j] - (int)frase[j];
            }else{
                soma += ((int)ze - (int)frase[j])+1+ ((int)frase2[j]-(int)A);
                
            }
        }
        printf("%lld\n", soma);
    }
    return 0;
}