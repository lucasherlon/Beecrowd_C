#include <stdio.h>

int main(){
    int par[5], impar[5], n, contp=0, conti=0;
    int i,j,k,l,m;
    
    for(i=0;i<15;i++){
        
        scanf("%d", &n);
        
        if(n%2==0){
            par[contp]=n;
            contp++;
            if(contp==5){
                for(j=0;j<5;j++){
                    printf("par[%d] = %d\n",j, par[j]);
                }
                contp=0;
            }
        }else{
            impar[conti]=n;
            conti++;
            if(conti==5){
                for(k=0;k<5;k++){
                    printf("impar[%d] = %d\n", k, impar[k]);
                }
                conti=0;
            }
        }
        
    }
    
    for(m=0;m<conti;m++){
        printf("impar[%d] = %d\n", m,impar[m]);
    }
    
    for(l=0;l<contp;l++){
        printf("par[%d] = %d\n", l, par[l]);
    }
    
    
    return 0;
}