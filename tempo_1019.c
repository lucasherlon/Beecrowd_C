#include <stdio.h>

int main()
{
    int total, segundos, minutos, horas;
    scanf("%d", &total);
    if (total<60){
        printf("0:0:%d\n", total);
    } else if (total<3600){
        minutos = total / 60;
        segundos = total % 60;
        printf("0:%d:%d\n", minutos, segundos);
    } else {
        horas = total / 3600;
        total = total - horas*3600;
        minutos = total/60;
        segundos = total - minutos*60;
        printf("%d:%d:%d\n", horas, minutos, segundos);
    }

    return 0;
}
