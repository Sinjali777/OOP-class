/* Write a program to find the volume of cube, cylinder and rectangular box by
suing the concept of function of overloading.*/
#include<iostream>
#include<cmath>
using namespace std;
class overloading
{
    public:
    int l,b,h,r;
    
    void volume(int l)
    {
        cout<<pow( l, 3);
    }
    void volume(int l, int b, int h)
    {
        cout<<(l*b*h);
    }
    void volume(int r, int h)
    {
        cout<< (3.14*r*r*h);
    }

};
int main()
{
    overloading vol;
    cout<<"enter length, breadth and height for regtangular box";
    cin>>vol.l>>vol.b>>vol.h;
    vol.volume(vol.l, vol.b, vol.h);
    cout<<"enter length for cube";
    cin>>vol.l;
    vol.volume(vol.l);
    cout<<"enter raduis and height for cylinder";
    cin>>vol.r>>vol.h;
    vol.volume(vol.r,vol.h);
    return 0;
}