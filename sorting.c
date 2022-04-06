#include<stdio.h>
int main(void)
{
    int count;
    int arr[1001];
    scanf("%d",&count);
    int a,b,t;
    for(a=0;a<count;a++) scanf("%d",&arr[a]);
    for(a=1;a<count;++a)
    for(b=count-1;b>=1;--b){
        if(arr[b-1]>arr[b]){
            t=arr[b-1];
            arr[b-1]=arr[b];
            arr[b]=t;
        }
    }
    for(a=0;a<count;a++) printf("%d ",arr[a]);
    return 0;
}
