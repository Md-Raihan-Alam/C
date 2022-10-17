// https://www.beecrowd.com.br/judge/en/runs/code/30406651
#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    float arr[12][12];
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            scanf("%f",&arr[i][j]);
    int start=0;
    float sum=0;
    int cnt=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            if(j>start)
              {
                  sum+=arr[i][j];
                  cnt++;
              }
        }
        start++;
    }
    if(ch=='S')
    {
        printf("%.1f\n",sum);
    }else if(ch=='M')
    {
        printf("%.1f\n",sum/cnt);
    }
    return 0;
}