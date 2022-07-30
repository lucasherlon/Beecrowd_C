#include <stdio.h>
 
int main() {
 
    int total, inicio;
    int cem = 0, cinq = 0, vint = 0, dez = 0;
    int cinc = 0, dois = 0, um = 0;
    
    scanf("%d", &total);
    inicio = total;
    
    
    if (total>= 100){
        cem = total/100;
        total = total - (cem*100);
    }
    if (total>= 50){
        cinq = total/50;
        total = total - (cinq*50);
    }
    if (total>= 20){
        vint = total/20;
        total = total - (vint*20);
    }
    if (total>= 10){
        dez = total/10;
        total = total - (dez*10);
    }
    if (total>= 5){
        cinc = total/5;
        total = total - (cinc*5);
    }
    if (total>= 2){
        dois = total/2;
        total = total - (dois*2);
    }
    if (total>= 1){
        um = total/1;
        total = total - (um*1);
    }
    
    printf("%d\n", inicio);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vint);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinc);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    
    
    return 0;
}