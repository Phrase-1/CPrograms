#include <iostream>
using namespace std;
template<class numtype>
class Compare
{
    numtype x,y;
public:
    Compare(numtype a,numtype b)
    {x=a,y=b;}
    numtype max();
    numtype min();
};
template<class numtype>
numtype Compare<numtype>::max()
{
    return(x>y)?x:y;
}
template<class numtype>
numtype Compare<numtype>::min()
{
    return(x<y)?x:y;
}
int main()
{
    Compare<int> cmp1(3,7);
    cout<<cmp1.max()<<" is the max"<<endl;
    cout<<cmp1.min()<<" is the min"<<endl<<endl;
    Compare<float> cmp2(45.78,93.6);
    cout<<cmp2.max()<<" is the max"<<endl;
    cout<<cmp2.min()<<" is the min"<<endl<<endl;
    Compare<char> cmp3('a','A');
    cout<<cmp3.max()<<" is the max"<<endl;
    cout<<cmp3.min()<<" is the min"<<endl<<endl;
    return 0;
}
