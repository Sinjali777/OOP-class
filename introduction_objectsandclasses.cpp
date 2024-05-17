/* Sample C++ code */
#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length, breadth;
    public:
    void area()
    {
        cout<<length*breadth;
    }
    void perimeter()
    {
        cout<<2*(length + breadth);
    }
    void getdata()
    {
        cout<<"enter length and breadth";
        cin>>length;
        cin>>breadth;
    }
};
int main() {
    rectangle r1,r2;
    r1.getdata();
    cout<<"area and perimeter of r1 is";
    r1.area(); 
    cout<<"  and perimeter is ";
    r1.perimeter();
   
    r2.getdata();
    cout<<"area and perimeter of r2 is";
    r2.area();
    cout<<endl;
    cout<<" and perimeter is";
    r2.perimeter();
    return 0;
};
