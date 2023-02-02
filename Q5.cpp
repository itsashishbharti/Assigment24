#include<iostream>
using namespace std;
class fab
{
    public :
    int n;
    void fanab()
    {
       // cout<<"value of N="<<n;
        int  t1 = 0, t2 = 1, nextTerm = 0;
         for (int i = 1; i <= n; ++i)
          {
              if(i == 1)
               {
                  if(t1==n)
                  {
                      cout<<"Number Found";
                        break;
                  }
                
              }
              if(i == 2)
               {
                  if(t2==n)
                  {
                      cout<<"Number Found";
                      break;
                  }
                  
              }
              nextTerm = t1 + t2;
              t1 = t2;
              t2 = nextTerm;

              if(nextTerm==n)
              {
              cout << "Number Found";
              break;
              }
              if(i==n)
              {
                cout<<"Number Not Found";
                break;
              }
        }
    }
};
int main()
{
    fab obj;
    cout<<"Enter Your Number=";
    cin>>obj.n;
    obj.fanab();
    return 0;
}