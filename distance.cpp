/* WAP to find distance berween two points using concept of oop */
#include <iostream>
#include<cmath>
using namespace std;
class D 
{   
    private:
    int x1,x2,y1,y2;
    public:
    void getdata()
    {
       cin>>x1>>x2>>y1>>y2;
    }
    void distc()
    {
        float dist= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        cout<<" distance between two points is"<<dist;
    }
};
int main() {
    D d1;
    cout<<"enter points for points";
    d1.getdata();
    d1.distc();
    return 0;
};
