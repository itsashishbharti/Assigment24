#include<iostream>
using namespace std;
void add(int x, float y)
{
        cout<<"Sum="<<x+y<<endl;
}
void add(float x,int y)
{
    cout<<"sum="<<x+y<<endl;
}
int main()
{
    float x=8.25;
    int y=9;
    add(y,x);
    add(x,y);
    return 0;
}