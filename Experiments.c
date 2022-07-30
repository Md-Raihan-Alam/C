//https://www.beecrowd.com.br/judge/en/problems/view/1094
#include<stdio.h>
int main()
{
    int testCases;
    float totalRabbit=0;
    float totalRat=0;
    float totalFrog=0;
    float totalAnimal=0;
    scanf("%d",&testCases);
    while(testCases--)
    {
        float total;
        char c;
        scanf("%f %c",&total,&c);
        if(c=='C'){
            totalRabbit+=total;
        }
        else if(c=='R'){
            totalRat+=total;
        }
        else if(c=='S'){
            totalFrog+=total;
        }
        totalAnimal+=total;
    }
    float rabbitPercentage=((totalRabbit/totalAnimal)*100);
    float ratPercentage=(totalRat/totalAnimal)*100;
    float frogPercentage=(totalFrog/totalAnimal)*100;
    printf("Total: %.0f cobaias\n",totalAnimal);
    printf("Total de coelhos: %.0f\n",totalRabbit);
    printf("Total de ratos: %.0f\n",totalRat);
    printf("Total de sapos: %.0f\n",totalFrog);
    printf("Percentual de coelhos: %.2f %%\n",rabbitPercentage);
    printf("Percentual de ratos: %.2f %%\n",ratPercentage);
    printf("Percentual de sapos: %.2f %%\n",frogPercentage);
    return 0;
}