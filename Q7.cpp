#include<iostream>
using namespace std;
int add(int x,int y,int z=0)
{
    return x+y+z;
}
int main()
{
    cout<<"Add="<<add(1,2);
    cout<<endl;
    cout<<"Add="<<add(1,2,3);
}