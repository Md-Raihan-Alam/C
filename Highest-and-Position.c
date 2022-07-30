//https://www.beecrowd.com.br/judge/en/problems/view/1080
#include <stdio.h>
 
int main() {
    int n;
    int highestNumber=0;
    int position;
    for(int i=1;i<=100;i++)
    {
        scanf("%d",&n);
        if(n>highestNumber){
            highestNumber=n;
            position=i;
        }
    }
    
    printf("%d\n%d\n",highestNumber,position);
    return 0;
}