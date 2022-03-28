#include <stdio.h>
 
int main() {
    int iniHour,iniMinute,finHour,finMinute,remHour,remMinute;
    scanf("%d %d %d %d",&iniHour,&iniMinute,&finHour,&finMinute);
    if(finMinute>iniMinute){
        remMinute=finMinute-iniMinute;
        if(finHour==iniHour){
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",remMinute);
        }else if(finHour>iniHour){
            remHour=finHour-iniHour;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",remHour,remMinute);
        }
        else{
            remHour=24-(iniHour-finHour);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",remHour,remMinute);
        }
    }else if(finMinute==iniMinute){
        if(finHour==iniHour){
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }else if(finHour>iniHour){
            remHour=finHour-iniHour;
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",remHour);
        }
        else{
            remHour=24-(iniHour-finHour);
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",remHour);
        }
    }else{
        remMinute=60-(iniMinute-finMinute);
        if(finHour==iniHour){
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",remMinute);
        }else if(finHour>iniHour){
            remHour=(finHour-iniHour)-1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",remHour,remMinute);
        }
        else{
            remHour=23-(iniHour-finHour);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",remHour,remMinute);
        }
    }
    return 0;
}