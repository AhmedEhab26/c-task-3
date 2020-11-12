#include <stdio.h>
#include <stdlib.h>
int sum(int arr[])
{
    int sum=0,i=0;
    for( i=0;i<20;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
   int arr[20],freq[10000]={},i=0,summ;
    for( i=0;i<20;i++)
    {
      scanf("%d",&arr[i]);
        if(freq[arr[i]]==1)
            arr[i]=0;
        else
        freq[arr[i]]++;
    }
    summ=sum(arr);
    printf("the sum equal = %d\n",summ);
    for ( i=0;i<20;i++)
    {
        if(arr[i]!=0)
            printf("%d ",arr[i]);
    }

    return 0;
}
