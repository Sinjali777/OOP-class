/* WAP to find the sum and average of the number by using new and delete
operator. Also use static_cast casting operator. */
#include <iostream>
using namespace std;
int main() {
    int a[100], sum=0,n,i, average;
    cout<<"enter number of array";
    cin>>n;
    int *x= new int(n-1);
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
       sum=sum + a[i];

       average = sum/n;
    }
    average= static_cast <float>(sum/n);
    cout<<"sum is "<<sum<<"average is "<<average;
    return 0;
};
