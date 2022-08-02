#include <stdio.h>

int main(){
    
    double total; 
    int cem=0, cinq=0, vint=0, dez=0, cinc=0, dois= 0;
    int um = 0, mcinq = 0, mvc = 0, mdez =0, mcinc = 0, mzeroum =0;

    scanf("%lf", &total);
    
    while(total>=100){
        total -= 100;
        cem += 1;
    }
    while(total>=50){
        total -= 50;
        cinq += 1;
    }
    while(total>=20){
        total -= 20;
        vint += 1;
    }
    while(total>=10){
        total -= 10;
        dez += 1;
    }
    while(total>=5){
        total -= 5;
        cinc += 1;
    }
    while(total>=2){
        total -= 2;
        dois += 1;
    }
    while(total>=1){
        total -= 1;
        um += 1;
    }
    while(total>=0.50){
        total -= 0.50;
        mcinq += 1;
    }
    while(total>=0.25){
        total -= 0.25;
        mvc += 1;
    }
    while(total>=0.10){
        total -= 0.10;
        mdez += 1;
    }
    while(total>=0.05){
        total -= 0.05;
        mcinc += 1;
    }
    while(total>0){
        total -= 0.01;
        mzeroum += 1;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinq);
    printf("%d nota(s) de R$ 20.00\n", vint);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinc);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", mcinq);
    printf("%d moeda(s) de R$ 0.25\n", mvc);
    printf("%d moeda(s) de R$ 0.10\n", mdez);
    printf("%d moeda(s) de R$ 0.05\n", mcinc);
    printf("%d moeda(s) de R$ 0.01\n", mzeroum);
    
    return 0;
}