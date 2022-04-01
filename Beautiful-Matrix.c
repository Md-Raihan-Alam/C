//https://codeforces.com/problemset/problem/263/A
#include<stdio.h>
int main(void)
{
    int mat[5][5];
    int col,row,total;
    int i,j;
    for(i=0;i<5;i++){
        scanf("%d %d %d %d %d",&mat[i][0],&mat[i][1],&mat[i][2],&mat[i][3],&mat[i][4]);
        if(mat[i][0]==1) {
            col=1;
            row=i+1;
            }
        else if(mat[i][1]==1) {
            col=2;
            row=i+1;
            }
        else if(mat[i][2]==1) {   
            col=3;
            row=i+1;
            }
        else if(mat[i][3]==1) {
            col=4;
            row=i+1;
            }
        else if(mat[i][4]==1){
             col=5;
             row=i+1;
             }
    }
    if(row>=3) row-=3;
    else if(row<3) row=3-row;
    if(col>=3) col-=3;
    else if(row<3) col=3-col;
    total=row+col;
    printf("%d\n",total);
    return 0;
}