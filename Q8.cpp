#include<iostream>
using namespace std;
void area(float x)
{
    cout<<"Area Of Circle="<<(3.14*(x*x))<<endl;
}
void area(float xx,int yy)
{
    cout<<"Area of Rectangle="<<xx*yy<<endl;
}
void area(int x1,int y1)
{
    cout<<"Area Of Tringle="<<(x1*y1)/2<<endl;
}
int main()
{
    area(4);//Circle
   area(5,7);//Rectangle
   area(2,5);//Triangle
    return 0;
}