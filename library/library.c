#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book               //����ṹ������(ֻ����һ���飬����ѭ�����д��ö౾)
{
	char no[10];         //���
	char name[10];       //����
	char publishday[10];    //��������
	//char chapt[3];         //���
	char writer[10];        //����
    int repeat;         //���Ĵ���
}book1,books[100],booktemp;//�ֿ���100����Ĵ���
void menu()                //��ʾ�˵��뷵�ز˵���
{
    printf("  ͼ��ݹ���ϵͳ\n");//ȫ��Ȩ��
    printf("  ���˵�\n1.���¶���ͼ���\n2.ͼ��һ��\n3.����ͼ��\n4.���ͼ��\n5.����ͼ��\n6.ɾ��ͼ��\n7.�����Ĵ�������\n8.�޸�ͼ����Ϣ\n0.�˳�ϵͳ\n");
}
void enter()//�����¼�����ͼ���¼ʱ�Ḳ��֮ǰ��¼��
{
    printf("\t���¶���ͼ���\n");
    int l,n;
    FILE *fp;
    fp=fopen("book.txt","wb");
    for(l=1;;l++)
    {
        printf("¼�����:");scanf("%s",&book1.no);
        printf("¼������:");scanf("%s",&book1.name);
        printf("¼��������:");scanf("%s",&book1.publishday);
        printf("¼������:");scanf("%s",&book1.writer);
        printf("¼����Ĵ���:");scanf("%d",&book1.repeat);
        printf("�Ƿ񱣴�¼��?\n1.����\t2.������\n");
        scanf("%d",&n);
        if(n==1)
            {
                fwrite(&book1.no,sizeof(struct book),1,fp);
            }
        printf("����¼��?\n����0���沢�˳�,1��������:");
        scanf("%d",&n);
        if(n==0)
            break;
    }
    fclose(fp);
    system("cls");
    menu();
}
void print()//��ʾ��¼(ͼ��һ��)
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

    printf("\t��ʾ����ͼ��(��%d��)\n",h-1);
    printf("����\t���\t����\t�������\t����\t���Ĵ���\n");
    for(i=0;i<h-1;i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t%d\n",i+1,books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
    }
    fclose(fp);
}
void search()//���Ҽ�¼strcmp()
{
    printf("\t����ͼ��\n");
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
        printf("��������Ҫ���ҵ�ͼ����:\n");
        scanf("%s",a);
        for(i=0;i<h;i++)
        {
            if((strcmp(books[i].name,a))==0)
                break;
        }
        if(i==h) printf("���޴���\n");
        else
        {
            printf("���\t����\t�������\t����\t���Ĵ���\n");
            printf("%s\t%s\t%s\t\t%s\t%d\n",books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
        }
        printf("������ѯ��\ny or n\n");
        scanf("%s",&s);
        if(s=='n')
            break;
    }
    system("cls");
    menu();
}
void add()//��Ӽ�¼
{
    int l,n;
    printf("\t���ͼ��\n");
    FILE *fp;
    fp=fopen("book.txt","ab");
    for(l=1;;l++)
    {
        printf("¼�����:");scanf("%s",&book1.no);
        printf("¼������:");scanf("%s",&book1.name);
        printf("¼��������:");scanf("%s",&book1.publishday);
        printf("¼������:");scanf("%s",&book1.writer);
        printf("¼����Ĵ���:");scanf("%d",&book1.repeat);
        printf("�Ƿ񱣴�¼��?\n1.����\t2.������");
        scanf("%d",&n);
        if(n==1)
            {
                fwrite(&book1.no,sizeof(struct book),1,fp);
            }
        printf("����¼��?\n����0���沢�˳�,1��������:");
        scanf("%d",&n);
        if(n==0)
            break;
    }
    fclose(fp);
    system("cls");
    menu();
}
void insert()//�����¼
{
    printf("\t����ͼ��\n");
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
    printf("��ʾ����ͼ��(��%d��)\n",h-1);
    printf("����\t���\t����\t�������\t����\t���Ĵ���\n");
    for(i=0;i<h-1;i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t%d\n",i+1,books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
    }
    printf("Ҫ���뵽�Ǳ���ǰ������������:");
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
    printf("¼�����:");scanf("%s",&booktemp.no);
    printf("¼������:");scanf("%s",&booktemp.name);
    printf("¼��������:");scanf("%s",&booktemp.publishday);
    printf("¼������:");scanf("%s",&booktemp.writer);
    printf("¼����Ĵ���:");scanf("%d",&booktemp.repeat);
    printf("�Ƿ񱣴�¼��?\n1.����\t2.������\n");
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
    printf("����ɹ�\n");
    menu();
}
void del()//ɾ����¼
{
    printf("\tɾ��ͼ��\n");
    int i;
    int h=0,no;//���
    FILE *fp;
    fp=fopen("book.txt","rb");
    while(!feof(fp))
    {
        fread(&books[h],sizeof(struct book),1,fp);
        h++;
    }
    fclose(fp);
    printf("��ʾ����ͼ��(��%d��)\n",h-1);
    printf("����\t���\t����\t�������\t����\t���Ĵ���\n");
    for(i=0;i<h-1;i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t%d\n",i+1,books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
    }
    printf("Ҫɾ���ڼ�����?\n");
    scanf("%d",&no);
    for(i=no-1;i<h;i++)
    {
        books[i]=books[i+1];
    }
    fp=fopen("book.txt","wb");
    printf("ɾ�����\n");
    for(i=0;i<h-1-1;i++)
    {
        fwrite(&books[i].no,sizeof(struct book),1,fp);
    }
    fclose(fp);
}
void sort()//��ͼ�鰴���Ĵ�������
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
    printf("\t���Ĵ�����С����\n");
    printf("����\t���\t����\t�������\t����\t���Ĵ���\n");
    for(i=0;i<h-1;i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t%d\n",i+1,books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
    }

}
void modify()//�޸ļ�¼����
{
    printf("\t�޸�ͼ����Ϣ\n");
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
    printf("��ʾ����ͼ��(��%d��)\n",h-1);
    printf("����\t���\t����\t�������\t����\t���Ĵ���\n");
    for(i=0;i<h-1;i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t%d\n",i+1,books[i].no,books[i].name,books[i].publishday,books[i].writer,books[i].repeat);
    }
    printf("Ҫ�޸ĵڼ�����Ϣ��\n");
    scanf("%d",&number);
    printf("1.�޸����\n2.�޸�����\n3.�޸ĳ������\n4.�޸�����\n5.�޸Ľ��Ĵ���\n");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
            printf("�����µ����:\n");
            scanf("%s",&books[number-1].no);
            break;
        case 2:
            printf("�����µ�����:\n");
            scanf("%s",&books[number-1].name);
            break;
        case 3:
            printf("�����µĳ������:\n");
            scanf("%s",&books[number-1].publishday);
            break;
        case 4:
            printf("�����µ�����:\n");
            scanf("%s",&books[number-1].writer);
            break;
        case 5:
            printf("�����µĽ��Ĵ���:\n");
            scanf("%d",&books[number-1].repeat);
            break;
    }
    fp=fopen("book.txt","wb");
    for(i=0;i<h-1;i++)
    {
        fwrite(&books[i].no,sizeof(struct book),1,fp);
    }
    fclose(fp);
    printf("�޸����\n");
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
            case 1:enter();printf("\n�������ּ�������:");break;
            case 2:print();printf("\n�������ּ�������:");break;
            case 3:search();printf("\n�������ּ�������:");break;
            case 4:add();printf("\n�������ּ�������:");break;
            case 5:insert();printf("\n�������ּ�������:");break;
            case 6:del();printf("\n�������ּ�������:");break;
            case 7:sort();printf("\n�������ּ�������:");break;
            case 8:modify();printf("\n�������ּ�������:");break;
            case 0:exit(0);
            default:printf("Error!!");printf("\n�������ּ�������:");break;
        }
    }
}
