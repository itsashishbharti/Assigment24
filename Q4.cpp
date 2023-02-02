#include<iostream>
using namespace std;
class pascal
{
    public:
    int n;
    void pascaltr()
    {
        int  coef = 1, space, i, j;

    cout<<endl;

    for(i=0; i<n; i++)
    {
    for(space=1; space <= n-i; space++)
    cout<<"  ";

    for(j=0; j <= i; j++)
    {
    if (j==0 || i==0)
    coef = 1;
    else
    coef = coef*(i-j+1)/j;

    cout<<"   "<< coef;
    }
    cout<<endl<<endl;
    }
 }
};
int main()
{
    pascal obj1;
    cout<<"Enter Your N Lines=";
    cin>>obj1.n;
    obj1.pascaltr();
    return 0;
};