#include<stdio.h>
void main()
{
    int A[100],i,n,position,element;
    printf("\n Enter no of elements in array:");
    scanf("%d",&n);
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("\n Enter element to be inserted and position:");
    scanf("%d%d",&element,&position);
    for(i=n;i>=position;i--)
        A[i]=A[i-1];
            A[position-1]=element;
    printf("\n Changed array is:\n");
    for(i=0;i<=n;i++)
        printf("%d ",A[i]);

}
