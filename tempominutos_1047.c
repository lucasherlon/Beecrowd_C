#include <stdio.h>

int main(){
    
    int T1, T2, m1, m2, dur, mdur;
    
    scanf("%d%d%d%d", &T1,&m1, &T2, &m2);
    
    if(T1==T2){
        
        if(m1==m2){
            dur = 24;
            mdur = 0;
        } else {
            dur = 0;
            if(m1>m2){
                mdur = 60-(m1-m2);
                dur = 23;
            }
            if(m2>m1){
                mdur = m2 -m1;
            }
        }
    
    }
    if(T1<T2){
        dur = T2 - T1;
        
        if(m2>m1){
            mdur = m2 -m1;
        }
        if(m2<m1){
            mdur = 60 -(m1 - m2);
            dur = dur - 1;
        }
        if(m1==m2){
            mdur = 0;
        }
        
    }
    if(T1>T2){
        dur = (24-T1) + T2;
        
        if(m2>m1){
            mdur = m2 -m1;
        }
        if(m2<m1){
            mdur = 60 -(m1 - m2);
            dur = dur - 1;
        }
        if(m1==m2){
            mdur = 0;
        }
        
    }
    
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur, mdur);
    
    return 0;
    
}