#include <stdio.h>

int main(){
    
    int t,q, i;
    double a,b, vol;
  
    
    while(1){
        scanf("%d", &t);
        if(t==0) break;
        
        for(i=0;i<t;i++){
            scanf("%d%lf%lf", &q, &a, &b);
            
            vol = (((a+b)*5)/2)*q;
            
            printf("Size #%d:\n", i+1);
            printf("Ice Cream Used: %.2lf cm2\n", vol);
            
        }
        
        printf("\n");
    }

    return 0;
}