/* Write a program to display n characters by using default arguments for all
parameters. Assume that the function takes two arguments (one character to be
printed and other number of characters to be printed). */
#include <iostream>
using namespace std;
int defarg(char a='c',int b=10)
{
    int i;
    for(i=1;i<=b;i++)
    {
        cout<<a;
    }
    return 0;
}
int main() {
    char x;
    int y;
    cout<<"enter character to be printed and number of characters to be printed=";
    cin>>x>>y;
    defarg(x,y);
    return 0;
};
