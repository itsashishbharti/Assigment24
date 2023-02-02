#include<iostream>
using namespace std;
class power
{
    public:
    int x,y;
    void powerxy()
    {
        int result=1;
        for(int i=1;i<=y;i++)
        {
            result=result*x;
        }

        cout<<"Answer is "<<result<<endl;
    }
};
int main()
{
    power obj;
    cout<<"Value Of X is= ";
    cin>>obj.x;
    cout<<"Value of Y is= ";
    cin>>obj.y;
    obj.powerxy();
    return 0;
};