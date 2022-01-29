#include<iostream>
#include<math.h>
using namespace std;

class dist
{
    double x1,x2,y1,y2;
    public:
        void get()
        {
            cout<<"enter values ";
            cin>>x1>>y1>>x2>>y2;
        }
        void calc()
        {
         
            double k,d;
            k = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
            d = pow(k,0.5);
            cout<<d;
        }
        };
        int main()
        {
            dist m;
            m.get();
            m.calc();
            return 0;

        }
