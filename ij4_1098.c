#include <stdio.h>

int main(){
    int i, j, k,l;
    double m,n;
    
    for(i=0;i<=20; i+=2){
        
        for(j=1;j<=3; j+=1){
            
            k=i/10;
            m=i/10.0;
            n=j+m;
            l=j+k;
            
            if(i%10==0){
            printf("I=%d J=%d\n",k,l);
                
            }else{
                printf("I=%.1lf J=%.1lf\n", m, n);
            }
        }
    }
    
    return 0;
}