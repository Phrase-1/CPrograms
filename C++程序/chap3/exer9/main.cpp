#include <iostream>
#include<string>
#include<string.h>
using namespace std;
class Seller
{
    char num;
    int quantity;//��������
    float price;//���۵���
    static float sum;//�����ܶ�
    static float discount;//�ۿ�
    static float sale;//98��
    static int n;//��������
    static float aver;//ƽ���ۼ�
public:
    static void set_discount();
    static void average();
    static void display();
    static void computing(Seller *);
    Seller(char,int,float);
};
float Seller::sale=0.98;
float Seller::sum=0;
int Seller::n=0;
float Seller::aver=0;//��̬���ݳ�Ա���������⸳��ֵ�������ڳ�Ա�ڽ��У�����
float Seller::discount=0;
void Seller::set_discount()
{
    cout<<"input today's discount:"<<endl;
    cin>>discount;
}
void Seller::computing(Seller *p)
{
    int i;
    for(i=0,p;i<3;i++,p++)
    {
        n+=p->quantity;
        if(p->quantity>10)
        {
            sum+=p->quantity*p->price*sale;
        }
        else sum+=p->quantity*p->price;
    }
    sum=sum*(1-discount);
}
void Seller::average()
{
    aver=sum/n;
}
void Seller::display()
{
    cout<<"�����ۿ"<<sum<<endl<<"ƽ���ۼ�:"<<aver<<endl;
}
Seller::Seller(char n,int q,float p)
{
    num=n;
    quantity=q;
    price=p;
}
int main()
{
    Seller s[3]={Seller(101,5,23.5),Seller(102,12,24.56),Seller(103,100,21.5)};
    Seller *pt;
    pt=s;
    Seller::set_discount();
    Seller::computing(pt);
    Seller::average();
    Seller::display();
    return 0;
}
