// C-PROGRAM to read and print array elements and list the negative elements of array if any.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter how much elements you want in your array\t");
    scanf("%d",&a);
    b=a;
    if(a<=0)
    {
        printf("are you mad\n");
    }
    else 
    {
        int harsh[a];
        printf("enter the elements of array\t");
        for(int i=1;i<=a;i=i+1)
        {
            scanf("%d",&harsh[i-1]);
        }
        printf("elements of array entered by you is\\are : ");
        for(int j=1;j<=a;j=j+1)
        {
            printf("%d\t",harsh[j-1]);
        }
        printf("\n");
        printf("negative element\\s of the array is\\are\n");
        for(int k=1;k<=b;k=k+1)
        {
            if(harsh[k-1]<0)
                {
                    printf("%d\n",harsh[k-1]);
                }
            else
                {
                    continue;
                }
        }
    }
    return 0;
}
