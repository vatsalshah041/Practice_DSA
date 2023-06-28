/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <conio.h>
#include <stdio.h>
#include <malloc.h>
void addToArrayForm(int* num, int numSize, int k,int* returnSize){
    int d=0;
    for(int i=0;i<numSize;i++)
    {
        d=d*10+num[i];
    }
    printf("%d",d);
    //return &num;
    d=d+k;
    int d1=d;int c,b=0;
    while(d1>0)
    {
        c=d1%10;
        b=b*10+c;
        d1=d1/10;
    }
    printf("%d",b);
    returnSize=(int*)malloc(returnSize * sizeof(int));
    while(b>0)
    {
        c=b%10;
        returnSize[j]=c;
        b=b/10;
    }
}
void main()
{
 int a[]={1,2,0,0};
 int n=4;
 int k=34;
 addToArrayForm(a,n,k);
}