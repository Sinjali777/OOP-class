#include<iostream>
using namespace std;

class time {
    int hour, minute;
public:
    void gettime() {
        cout << "Enter hour: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
    }
    
    void showtime() {
        cout << "Addition of the time = " << hour << " hour(s) and " << minute << " minute(s)" << endl;
    }
    
    void addtime(time t1, time t2) {
        hour = t1.hour + t2.hour;
        minute = t1.minute + t2.minute;
        // Handling minutes greater than 60
        if (minute >= 60) {
            hour += minute / 60;
            minute = minute % 60;
        }
    }
};

int main() {
    time t1, t2, t3;
    cout << "Enter time1: " << endl;
    t1.gettime();
    cout << "Enter time2: " << endl;
    t2.gettime();
    t3.addtime(t1, t2);
    t3.showtime();
    return 0;
}
