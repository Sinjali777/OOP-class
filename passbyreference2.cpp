/*  Write a function that passes two temperatures by reference and sets the larger
of the two numbers to 100 by using return by reference. Using class and objects */
#include <iostream>
using namespace std;
class temperature
{ 
    public:
    int a,b;
    void temp(int &a,int &b)
    {
        if (a>b){
            a=100;
        }
        else
        {
            b=100;
        }
    }
};
int main() {
    temperature t;
    cout << "Enter 2 temperatures";
    cin>>t.a>>t.b;
    t.temp(t.a,t.b);
    cout<<"temp 1= "<<t.a<<"temp 2= "<<t.b;
    return 0;
};
