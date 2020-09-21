//矩阵的行列互换
#include<stdio.h>
void main()
{
    int a[2][3]={1,2,3,4,5,6};
    int b[3][2];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            b[j][i]=a[i][j];//此处不能用b[i][j]=a[j][i]!!!!
        }
        printf("\n");
    }
    printf("行列互换:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
