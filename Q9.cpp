#include<iostream>
using namespace std;
void max(int x,int y)
{
    if(x>y)
    {
        cout<<"Max="<<x<<endl;
    }
    else
    {
        cout<<"Max="<<y<<endl;
    }
}
void max(float x,float y)
{
     if(x>y)
    {
        cout<<"Max="<<x<<endl;
    }
    else
    {
        cout<<"Max="<<y<<endl;
    }
}
int main()
{
    float x=8.25,y=9.12;
    max(4,9);
    max(x,y);
    return 0;
}