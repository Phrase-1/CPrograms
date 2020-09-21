#include <iostream>

using namespace std;
class Matrix
{
    int array[2][3];
public:

    friend istream& operator>>(istream &input,Matrix &m);
    friend ostream& operator<<(ostream &output,Matrix &m);
};
istream& operator>>(istream &input,Matrix &m)
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            input>>m.array[i][j];
        }
    }
    return input;
}
ostream& operator<<(ostream &output,Matrix &m)
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            output<<m.array[i][j]<<"  ";
        }
        output<<endl;
    }
    output<<endl;
    return output;
}
int main()
{
    Matrix a,b;
    cout<<"input matrix a:"<<endl;
    cin>>a;
    cout<<"input matrix b:"<<endl;
    cin>>b;
    cout<<"matrix a is:"<<endl<<a<<endl;
    cout<<"matrix b is:"<<endl<<b;
    return 0;
}
