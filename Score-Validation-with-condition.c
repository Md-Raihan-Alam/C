//https://www.beecrowd.com.br/judge/en/problems/view/1118
#include<stdio.h>
int main()
{
    float averageScore=0;
    int validScores=0;
    int runProgram=1;
    while(1)
    {
        float score;
        scanf("%f",&score);
        if(score<0 || score>10)
        {
            printf("nota invalida\n");
        }else{
            averageScore+=score;
            validScores++;
        }
        if(validScores==2)
        {
            printf("media = %.2f\n",averageScore/2);
            while(1){
                int onRun;
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&onRun);
                if(onRun==2){
                    runProgram=0;
                    break;
                }else if(onRun==1){
                    validScores=0;
                    averageScore=0;
                    break;
                }
            }
        }
        if(runProgram==0)
            break;
    }
    return 0;
}