// https://www.beecrowd.com.br/judge/en/problems/view/1789
#include <stdio.h>
int main() {
    int a;
    int mxGroup,mx=0;
    while(scanf("%d",&a)!=EOF)
    {
        int arr[a];
        int i;
        for(i=0,mx=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>mx)
            {
                mx=arr[i];
                if(mx<10)
                {
                    mxGroup=1;
                }else if(mx<20)
                {
                    mxGroup=2;
                }else
                {
                    mxGroup=3;
                }
            }
        }
        printf("%d\n",mxGroup);
    }
    return 0;
}