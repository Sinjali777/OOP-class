#include<iostream>
using namespace std;

int prime ()
{
    int i,n,c=0;
    cout<<"give value for n ";
    cin>>n;
    for (i=1;i<=n; i++)
    {
        if(n%i==0){
            c=c+1;
        }
        
    }
    cout<<c;
    if (c==2){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}

int main()
{
    prime();
    return 0;
}
