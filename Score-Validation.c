//https://www.beecrowd.com.br/judge/en/problems/view/1117
#include<stdio.h>
int main()
{
    int validScores=0;
    float averageMarking=0;
    while(1){
        float score;
        scanf("%f",&score);
        if(score<0 || score>10)
        {
            printf("nota invalida\n");
        }
        else{
            validScores++;
            averageMarking+=score;
        }
        if(validScores==2) break;
    }
    printf("media = %.2f\n",averageMarking/2);
    return 0;
}