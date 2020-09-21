#include<stdio.h>
int fun(int a[])
{
    int i,sum=0,j=0,array;
    for(i=0;i<9;i++)
        sum+=a[i];
    printf("array=%d\n",sum/9);
    for(i=0;i<9;i++)
    {
        if(a[i]<sum/9)
        {
            printf("%d  ",a[i]);
            j++;
        }
    }
    printf("\n");
    return j;
}
void main()
{
    int below,i;
    int score[9];
    printf("input 9 scores:\n");
    for(i=0;i<9;i++)
        scanf("%d",&score[i]);
    below=fun(score);
    printf("%d scores under the array",below);
}
