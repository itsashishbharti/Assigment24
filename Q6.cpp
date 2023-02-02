#include<iostream>
using namespace std;
void swap(int &p,int &q)
{
    int temp=p;
    p=q;
    q=temp;
}
int main()
{
    int x=5,y=10;
    cout<<"Before Swap x= "<<x<<"  "<<"y="<<y<<endl;  
    swap(x,y);
    cout<<"After Swap x= "<<x<<"  "<<"y="<<y<<endl;  
    return 0;
};