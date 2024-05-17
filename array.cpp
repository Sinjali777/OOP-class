/* WAP to read and display the elements of an array */
#include <iostream>
using namespace std;
class a
{   
    public:
    int a[5];
    void arrays()
    {
        for(int i=0;i<5;i++){
        cout<<a[i]<<"\n";
        }
    }
};
int main() 
{
    a z1;
    cout<<"enter values for array";
    for(int i=0;i<5;i++){
        cin>>z1.a[i];
        }
    z1.arrays();
    return 0;
};
