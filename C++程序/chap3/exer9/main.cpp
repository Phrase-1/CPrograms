#include <iostream>
#include<string>
#include<string.h>
using namespace std;
class Seller
{
    char num;
    int quantity;//销售数量
    float price;//销售单价
    static float sum;//销售总额
    static float discount;//折扣
    static float sale;//98折
    static int n;//销售总数
    static float aver;//平均售价
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
float Seller::aver=0;//静态数据成员必须在类外赋初值，不能在成员内进行！！！
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
    cout<<"总销售款："<<sum<<endl<<"平均售价:"<<aver<<endl;
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
