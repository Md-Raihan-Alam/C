// https://www.beecrowd.com.br/judge/en/problems/view/1133
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=a;i<b;i++)
    {
        if(i%5==2 || i%5==3)
            printf("%d\n",i);
    }
    return 0;
}