//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include<stdio.h>
int cmpFunction(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}
int compValues(const void *c,const void *d){
    return *(int *)c-*(int *)d;
}
int main(void)
{
    int totalNum,totalSearch;
    scanf("%d %d",&totalNum,&totalSearch);
    int arr[totalNum];
    for(int i=0;i<totalNum;i++) scanf("%d",&arr[i]);
    qsort(arr,totalNum,sizeof(int),cmpFunction);
    for(int j=0;j<totalSearch;j++){
        int search;
        scanf("%d",&search);
        int *p=bsearch(&search,arr,totalNum,sizeof(int),compValues);
        if(p) printf("found\n");
        else printf("not found\n");
    }
    return 0;
}