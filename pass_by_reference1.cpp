/* Write a function that passes two temperatures by reference and sets the larger
of the two numbers to 100 by using return by reference. */
#include <iostream>
using namespace std;
int& temp(int &a,int &b)
{
    if (a>b)
    {
        return a;       
    } 
     else
    {
        return b;       
    }   
}
int main() {
    int x,y;
    cout<<"enter two temperatures";
    cin>>x>>y;
    temp (x,y)=100;
    cout<<"temp1="<<x<<"temp 2= "<<y;
    return 0;
};
