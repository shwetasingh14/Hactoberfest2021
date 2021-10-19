#include <stdio.h>
int main()
{
    int a,i,b;
    printf("Enter the number of elements in an array:");
    scanf("%d", &a);
    int a1[a];
    printf("Enter the elements of an array\n");
    for(i=0;i<a;i=i+1)
    {
        printf("Enter the elements %d:",i+1);
        scanf("%d", &a1[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d", &b);
    for(i=0;i<a;i=i+1)
    {
        if(b==a1[i])
        {
            printf("The element %d is located at the index %d",b,i);
            break;
        }
    }
    return 0;
}
