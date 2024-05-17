/* Sample C++ code */
#include <iostream>
using namespace std;
class largest
{   
    public:
    int a,b;
    
    void l()
    {
        if(a>b){
            cout<<a<<"is greater than"<<b;
        }
        else {
             cout<<b<<"is greater than"<<a;
        }
    }
};
int main() {
    largest l1;
    cout<<"enter any two numbers";
    cin>>l1.a>>l1.b;
    l1.l();
    return 0;
};
