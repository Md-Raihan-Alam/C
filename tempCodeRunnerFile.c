#include <stdio.h>
 
int main() {
    int iniHour,iniMinute,finHour,finMinute,remHour,remMinute;
    scanf("%d %d %d %d",&iniHour,&iniMinute,&finHour,&finMinute);
    if(finMinute>iniMinute){
        remMinute=finMinute-iniMinute;
        if(finHour==iniHour){
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)",remMinute);
        }else if(finHour>iniHour){
            remHour=finHour-iniHour;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",remHour,remMinute);
        }
        else{
            remHour=24-(iniHour-finHour);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",remHour,remMinute);
        }
    }else if(finMinute==iniMinute){
        if(finHour==iniHour){
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
        }else if(finHour>iniHour){
            remHour=finHour-iniHour;
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)",remHour);
        }
        else{
            remHour=24-(iniHour-finHour);
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)",remHour);
        }
    }else{
        remMinute=60-(iniMinute-finMinute);
        if(finHour==iniHour){
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)",remMinute);
        }else if(finHour>iniHour){
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)",remMinute);
        }
        else{
            remHour=24-(iniHour-finHour);
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)",remMinute);
        }
    }
    return 0;
}