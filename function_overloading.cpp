/* Write a program to find the volume of cube, cylinder and rectangular box by
suing the concept of function of overloading. */
#include <iostream>
using namespace std;
int volume(int l)
{
   
    return(l*l*l);
};
int volume(int l, int b, int h)
{
    
    return (l*b*h);
};
int volume(int r,int h)
{
    
    return (3.14*r*r*h);
};
int main() {
    int l,b,h,r;
    cout<<"enter value for length, breadth, height and radius";
    cin>>l>>b>>h>>r;
  cout<<"the volume of cube is"<<volume(l)<<"\n";
  cout<<"the volume of cuboid is"<<volume(l,b,h)<<"\n";
  cout<<"the volume of cylinder is"<<volume(r,h)<<"\n";
    return 0;
};
