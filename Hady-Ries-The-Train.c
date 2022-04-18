//https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E
#include<stdio.h>
int main(void)
{
    long long int n;
    long long int colCount=0,rowCount=0;
    long long int col=-1,row=0;
    scanf("%lld",&n);
    for(int i=0;i<=n;i++){
        if(col==4 && colCount==0) {
            col=1;
            colCount=1;
            rowCount=1;
        }else if(col==4 && colCount==1){
            col=-1;
            colCount=0;
            rowCount=1;
        }
        if(rowCount==1){
            row++;
            rowCount=0;
        }
        col++;
    }
    printf("%lld %lld\n",row,col);
    return 0;
}