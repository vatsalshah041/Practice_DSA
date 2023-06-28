#include <conio.h>
#include <stdio.h>
bool checkIfExist(int* arr, int arrSize){
    int flag=0;
    for(int i=0;i<arrSize-1;i++)
    {
        for(int j=i+1;j<arrSize;j++)
        {
            if(arr[i]*2==arr[j] || arr[j]*2==arr[i])
            {
                printf("i= %d",i);
                printf("j= %d",j);
                return true;
                
            }
        }
    }
    return false;
}

int main()
{
    int arr[]={-2,0,10,-19,4,6,-8};
    int size=7;
    bool x=checkIfExist(arr,size);
    printf("%d",x);
    return 0;
}
