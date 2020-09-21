#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book               //定义结构体类型(只定义一本书，将其循环便可写入好多本)
{
	char no[10];         //书号
	char name[10];       //书名
	char publishday[10];    //出版日期
	//char chapt[3];         //类别
	char writer[10];        //作者
    int repeat;         //借阅次数
}book1,books[100],booktemp;//现可做100本书的处理
void menu()                //显示菜单与返回菜单项
{
    printf("  图书馆管理系统\n");//全部权限
    printf("  主菜单\n1.重新定义图书库\n2.图书一览\n3.查找图书\n4.添加图书\n5.插入图书\n6.删除图书\n7.按借阅次数排序\n8.修改图书信息\n0.退出系统\n");
}
void enter()//输入记录（添加图书记录时会覆盖之前记录）
{
    printf("\t重新定义图书库\n");
    int l,n;
    FILE *fp;
    fp=fopen("book.txt","wb");
    for(l=1;;l++)
    {
        printf("录入书号:");scanf("%s",&book1.no);
        printf("录入书名:");scanf("%s",&book1.name);
        printf("录入出版年份:");scanf("%s",&book1.publishday);
        printf("录入作者:");scanf("%s",&book1.writer);
        printf("录入借阅次数:");scanf("%d",&book1.repeat);
        printf("是否保存录入?\n1.保存\t2.不保存\n");
        scanf("%d",&n);
        if(n==1)
            {
                fwrite(&book1.no,sizeof(struct book),1,fp);
            }
        printf("继续录入?\n输入0保存并退出,1继续输入:");
        scanf("%d",&n);
        if(n==0)
            break;
    }
    fclose(fp);
    system("cls");
    menu();
}
void print()//显示记录(图书一览)
{
    int h=0;
    FILE *fp;
    fp=fopen("book.txt","rb");
    int i;
    while(!feof(fp))
    {
        fread(&books[h],sizeof(struct book),1,fp);
        h++;
    }

    printf("\t显示所有图书(共%d本)\n",h-1);
    printf("排序\t书号\t书名\t出版年份\t作者\t借阅次数\n");
    for(i=0;i<h-1;i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t%d\n",i+1,books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
    }
    fclose(fp);
}
void search()//查找记录strcmp()
{
    printf("\t查找图书\n");
    int i,h=0;
    char s;
    FILE *fp;
    fp=fopen("book.txt","rb");
    char a[20];
    while(!feof(fp))
    {
        fread(&books[h],sizeof(struct book),1,fp);
        h++;
    }
    fclose(fp);
    while(i)
    {
        printf("请输入想要查找的图书名:\n");
        scanf("%s",a);
        for(i=0;i<h;i++)
        {
            if((strcmp(books[i].name,a))==0)
                break;
        }
        if(i==h) printf("查无此书\n");
        else
        {
            printf("书号\t书名\t出版年份\t作者\t借阅次数\n");
            printf("%s\t%s\t%s\t\t%s\t%d\n",books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
        }
        printf("继续查询？\ny or n\n");
        scanf("%s",&s);
        if(s=='n')
            break;
    }
    system("cls");
    menu();
}
void add()//添加记录
{
    int l,n;
    printf("\t添加图书\n");
    FILE *fp;
    fp=fopen("book.txt","ab");
    for(l=1;;l++)
    {
        printf("录入书号:");scanf("%s",&book1.no);
        printf("录入书名:");scanf("%s",&book1.name);
        printf("录入出版年份:");scanf("%s",&book1.publishday);
        printf("录入作者:");scanf("%s",&book1.writer);
        printf("录入借阅次数:");scanf("%d",&book1.repeat);
        printf("是否保存录入?\n1.保存\t2.不保存");
        scanf("%d",&n);
        if(n==1)
            {
                fwrite(&book1.no,sizeof(struct book),1,fp);
            }
        printf("继续录入?\n输入0保存并退出,1继续输入:");
        scanf("%d",&n);
        if(n==0)
            break;
    }
    fclose(fp);
    system("cls");
    menu();
}
void insert()//插入记录
{
    printf("\t插入图书\n");
    char no[10];
    int h=0,i,ins,n;
    FILE *fp,*fptemp;
    fp=fopen("book.txt","rb");
    while(!feof(fp))
    {
        fread(&books[h],sizeof(struct book),1,fp);
        h++;
    }
    fclose(fp);
    printf("显示所有图书(共%d本)\n",h-1);
    printf("排序\t书号\t书名\t出版年份\t作者\t借阅次数\n");
    for(i=0;i<h-1;i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t%d\n",i+1,books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
    }
    printf("要插入到那本书前？输入此书书号:");
    scanf("%s",&no);
    for(i=0;i<h;i++)
    {
        if((strcmp(books[i].no,no))==0)
            break;
    }ins=i;
    fptemp=fopen("booktemp.txt","wb");
    for(i=0;i<ins;i++)
    {
        fwrite(&books[i],sizeof(struct book),1,fptemp);
    }
    fclose(fptemp);
    fptemp=fopen("booktemp.txt","ab");
    printf("录入书号:");scanf("%s",&booktemp.no);
    printf("录入书名:");scanf("%s",&booktemp.name);
    printf("录入出版年份:");scanf("%s",&booktemp.publishday);
    printf("录入作者:");scanf("%s",&booktemp.writer);
    printf("录入借阅次数:");scanf("%d",&booktemp.repeat);
    printf("是否保存录入?\n1.保存\t2.不保存\n");
    scanf("%d",&n);
    if(n==1)
        fwrite(&booktemp.no,sizeof(struct book),1,fptemp);
    fclose(fptemp);
    fptemp=fopen("booktemp.txt","ab");
    for(i=ins;i<h-1;i++)
    {
        fwrite(&books[i].no,sizeof(struct book),1,fptemp);
    }
    fclose(fptemp);
    remove("book.txt");
    rename("booktemp.txt","book.txt");
    printf("插入成功\n");
    menu();
}
void del()//删除记录
{
    printf("\t删除图书\n");
    int i;
    int h=0,no;//书号
    FILE *fp;
    fp=fopen("book.txt","rb");
    while(!feof(fp))
    {
        fread(&books[h],sizeof(struct book),1,fp);
        h++;
    }
    fclose(fp);
    printf("显示所有图书(共%d本)\n",h-1);
    printf("排序\t书号\t书名\t出版年份\t作者\t借阅次数\n");
    for(i=0;i<h-1;i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t%d\n",i+1,books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
    }
    printf("要删除第几本书?\n");
    scanf("%d",&no);
    for(i=no-1;i<h;i++)
    {
        books[i]=books[i+1];
    }
    fp=fopen("book.txt","wb");
    printf("删除完成\n");
    for(i=0;i<h-1-1;i++)
    {
        fwrite(&books[i].no,sizeof(struct book),1,fp);
    }
    fclose(fp);
}
void sort()//对图书按借阅次数排序
{
    int h=0,i,j;
    FILE *fp;
    fp=fopen("book.txt","rb");
    while(!feof(fp))
    {
        fread(&books[h],sizeof(struct book),1,fp);
        h++;
    }
    fclose(fp);
    for(i=0;i<h;i++)
    {
        for(j=0;j<h-i-1-1;j++)
        {
            if(books[j].repeat>books[j+1].repeat)
            {
                booktemp=books[j];
                books[j]=books[j+1];
                books[j+1]=booktemp;
            }
        }
    }
    printf("\t借阅次数由小到大\n");
    printf("排序\t书号\t书名\t出版年份\t作者\t借阅次数\n");
    for(i=0;i<h-1;i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t%d\n",i+1,books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
    }

}
void modify()//修改记录数据
{
    printf("\t修改图书信息\n");
    int h=0,m,i;
    int number;
    FILE *fp;
    fp=fopen("book.txt","rb");
    while(!feof(fp))
    {
        fread(&books[h],sizeof(struct book),1,fp);
        h++;
    }
    fclose(fp);
    printf("显示所有图书(共%d本)\n",h-1);
    printf("排序\t书号\t书名\t出版年份\t作者\t借阅次数\n");
    for(i=0;i<h-1;i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t%d\n",i+1,books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
    }
    printf("要修改第几条信息？\n");
    scanf("%d",&number);
    printf("1.修改书号\n2.修改书名\n3.修改出版年份\n4.修改作者\n5.修改借阅次数\n");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
            printf("输入新的书号:\n");
            scanf("%s",&books[number-1].no);
            break;
        case 2:
            printf("输入新的书名:\n");
            scanf("%s",&books[number-1].name);
            break;
        case 3:
            printf("输入新的出版年份:\n");
            scanf("%s",&books[number-1].publishday);
            break;
        case 4:
            printf("输入新的作者:\n");
            scanf("%s",&books[number-1].writer);
            break;
        case 5:
            printf("输入新的借阅次数:\n");
            scanf("%d",&books[number-1].repeat);
            break;
    }
    fp=fopen("book.txt","wb");
    for(i=0;i<h-1;i++)
    {
        fwrite(&books[i].no,sizeof(struct book),1,fp);
    }
    fclose(fp);
    printf("修改完成\n");
}
main()
{
    int loop,i;
    menu();
    while(loop)
    {
    scanf("%d",&i);
        switch(i)
        {
            case 1:enter();printf("\n输入数字继续操作:");break;
            case 2:print();printf("\n输入数字继续操作:");break;
            case 3:search();printf("\n输入数字继续操作:");break;
            case 4:add();printf("\n输入数字继续操作:");break;
            case 5:insert();printf("\n输入数字继续操作:");break;
            case 6:del();printf("\n输入数字继续操作:");break;
            case 7:sort();printf("\n输入数字继续操作:");break;
            case 8:modify();printf("\n输入数字继续操作:");break;
            case 0:exit(0);
            default:printf("Error!!");printf("\n输入数字继续操作:");break;
        }
    }
}
