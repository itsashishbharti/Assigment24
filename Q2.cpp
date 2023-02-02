#include<iostream>
using namespace std;
class high
{
    public:
    int n;
    int max=-1;
    void highestdigt()
    {
        int r;
        while(n!=0)
        {
            r=n%10;
            if(r>max)
                max=r;
            n=n/10;   
        }
       
                cout<<"Highest Digit Is ="<<max<<endl;
    }

};
int main()
{
    high obj;
    cout<<"Enter Your Number= ";
    cin>>obj.n;
    obj.highestdigt();
    return 0;
};
