#include<stdio.h>

int binsea(int x,int arr[],int n)
{
    int low,high,mid;

    low=0;
    high=n-1;

    mid = ( low + high ) / 2;

    while(low < high && x != arr[mid])
    {
        if( x > arr[mid])
            low = mid+1;
        else
            high = mid -1;

        mid = ( low + high)/2;
    }

    if(x==arr[mid])
        return mid;
    else
        return -1;
}


int main(void)
{
    int arr[]={2,4,6,7,51};
    printf("%d",binsea(7,arr,5));
    return 0;
}

