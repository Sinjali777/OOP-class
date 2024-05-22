/* Write a program to display n characters by using default arguments for all
parameters. Assume that the function takes two arguments (one character to be
printed and other number of characters to be printed). */
#include <iostream>
using namespace std;
class defarg
{
    public:
    char a;
    int b;
    void sugam(char a='c', int b=10)
    {
        for(int i=1;i<=b;i++)
        {
            cout<<a;
        }
    }
};
int main() {
    
    defarg d;
    cout<<"enter character and number of times to be displayed"<<endl;
    
    cin>>d.a;
    cin>>d.b;
    cout <<"using default argument"<<endl;
    d.sugam();
    cout<<"using only one argument"<<endl;
    d.sugam('*');
    cout<<"using both argument"<<endl;
    d.sugam(d.a,d.b);
    return 0;
};
