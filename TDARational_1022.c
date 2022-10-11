#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,j, n1, d1,n2, d2;
    int ns, ds;
    char op;
    char bar1, bar2;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &n1);
        scanf(" %c", &bar1);
        scanf("%d", &d1);
        scanf(" %c", &op);
        scanf("%d", &n2);
        scanf(" %c", &bar2);
        scanf("%d", &d2);
        
        if(op=='+'){
            ns = n1*d2+n2*d1;
            ds = d1*d2;
            printf("%d/%d = ", ns, ds);
            
            if(ns>ds){
                for(j=(ds/2)+1;j>=2;j--){
                    if(ns%j==0 && ds%j==0){
                        ns = ns/j;
                        ds = ds/j;
                        break;
                    }
                }
            }else if(ns<ds){
                for(j=(ns/2)+1;j>=2;j--){
                    if(ns%j==0 && ds%j==0){
                        ns = ns/j;
                        ds = ds/j;
                        break;
                    }
                }
            }else{
                ns = ns/abs(ns);
                ds = ds/abs(ds);
            }
            
            printf("%d/%d\n", ns,ds);
            
        }else if(op=='-'){
            ns = n1*d2-n2*d1;
            ds = d1*d2;
            printf("%d/%d = ", ns, ds);
            
            if(abs(ns)>abs(ds)){
                for(j=abs((ns/2)+1);j>=2;j--){
                    if(abs(ns)%j==0 && abs(ds)%j==0){
                        ns = ns/j;
                        ds = ds/j;
                        break;
                    }
                }
            }else if(abs(ns)<abs(ds)){
                for(j=abs((ds/2)+1);j>=2;j--){
                    if(abs(ns)%j==0 && abs(ds)%j==0){
                        ns = ns/j;
                        ds = ds/j;
                        break;
                    }
                }
            }else{
                ns = ns/abs(ns);
                ds = ds/abs(ds);
            }
            
            printf("%d/%d\n", ns,ds);
            
        }else if(op=='*'){
            
            ns = n1*n2;
            ds = d1*d2;
            printf("%d/%d = ", ns, ds);
            
            if(abs(ns)>abs(ds)){
                for(j=abs((ns/2)+1);j>=2;j--){
                    if(abs(ns)%j==0 && abs(ds)%j==0){
                        ns = ns/j;
                        ds = ds/j;
                        break;
                    }
                }
            }else if(abs(ns)<abs(ds)){
                for(j=abs((ds/2)+1);j>=2;j--){
                    if(abs(ns)%j==0 && abs(ds)%j==0){
                        ns = ns/j;
                        ds = ds/j;
                        break;
                    }
                }
            }else{
                ns = ns/abs(ns);
                ds = ds/abs(ds);
            }
            
            printf("%d/%d\n", ns,ds);
            
        }else{
            ns = n1*d2;
            ds = n2*d1;
            printf("%d/%d = ", ns, ds);
            
            if(abs(ns)>abs(ds)){
                for(j=abs((ns/2)+1);j>=2;j--){
                    if(abs(ns)%j==0 && abs(ds)%j==0){
                        ns = ns/j;
                        ds = ds/j;
                        break;
                    }
                }
            }else if(abs(ns)<abs(ds)){
                for(j=abs((ds/2)+1);j>=2;j--){
                    if(abs(ns)%j==0 && abs(ds)%j==0){
                        ns = ns/j;
                        ds = ds/j;
                        break;
                    }
                }
            }else{
                ns = ns/abs(ns);
                ds = ds/abs(ds);
            }
            
            printf("%d/%d\n", ns,ds);
            
        }
        
        
    }
    
    
    return 0;
}
