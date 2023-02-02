#include<iostream>
using namespace std;
class primenumber
{
    public:
    int n;
    void prime()
    {
        int flag=0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Number is Prime "<<endl;
            else
            cout<<"Number is Not  Prime "<<endl;
            
    }
};
int main()
{
    primenumber obj;
    cout<<"Enter Your Number";
    cin>>obj.n;
    obj.prime();
};