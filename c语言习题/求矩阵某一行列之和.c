//求矩阵某一行列之和
#include<stdio.h>
void main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum+=a[i][j];
        }
        printf("第%d行的和:%d\n",i,sum);
    }
    for(j=0;j<3;j++)
    {
        sum=0;
        for(i=0;i<3;i++)
        {
            sum+=a[i][j];
        }
        printf("第%d列的和:%d\n",j,sum);
    }
}
