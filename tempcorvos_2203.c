#include <math.h>
#include <stdio.h>

int main(){
    int xf, yf, xi, yi, rf, rc, vi, alc;
    double dist;
    
      while(scanf("%d%d%d%d%d%d%d", &xf, &yf, &xi, &yi, &vi, &rf, &rc)!=EOF){
        
        dist = sqrt(pow(xf-xi,2)+pow((yf-yi),2))+1.5*vi;
        alc = rf+rc;
        
        if(alc>=dist){
            printf("Y\n");
        }else{
            printf("N\n");
        }
      }
    return 0;

}