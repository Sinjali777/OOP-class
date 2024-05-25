#include<iostream>
using namespace std;
class time
{
    int hour,minute;
    public:
    void gettime()
    {
        cout<<"enter hour=";
        cin>>hour;
        cout<<"enter minutes= ";
        cin>>minute;
    
    }
    void showtime()
    {
        cout<<"addtion of the time= "<<hour<<"hour and "<<minute<<"minute";
    }
    void addtime(time t1,time t2)
    {
        hour=t1.hour+t2.hour;
        minute=t1.minute+t2.minute;
        if(minute>60)
        {
            hour+=minute/60;
            minute=minute%60;
        }
    }
};
int main()
{
    time t1,t2,t3;
    cout<<"enter time1 "<<endl;
    t1.gettime();
    cout<<"enter time2"<<endl;
    t2.gettime();
    t3.addtime();
    t3.showtime();
    return 0;

}