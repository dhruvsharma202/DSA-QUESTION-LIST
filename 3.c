#include<stdio.h>
void main()
{
    int A[100],i,n,element;
    printf("\n Enter no of elements in array:");
    scanf("%d",&n);
    printf("\n Enter elements of array in increasing order:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("\n Enter element to be inserted:");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(A[i]>=ele)
        {
            A[i]=A[i]+element;
            ele=A[i]-element;
            A[i]=A[i]-element;
        }
    }
    A[n]=element;
    printf("\n Changed array is:\n");
    for(i=0;i<=n;i++)
        printf("%d ",A[i]);

}
