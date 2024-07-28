//  Program to convert time (hour, minute and second) in 24-hr format to
// 12-hr format.

#include <iostream>
using namespace std;

int flag;
class twelveHour
{
    int hours, minutes, seconds;
    char ampm[2][3] = {"am","pm"};

public:
    twelveHour(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
    void showTime()
    {
        cout << "Time in 12 hour formate is : " << endl;
        cout << hours << ":" << minutes << ":" << seconds<<" "<<ampm[flag];
    }
};
class TwentyFour
{
    int hours, minutes, seconds;

public:
    TwentyFour(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
    void getTime()
    {
        cout << "Enter the time in HH:MM:SS formate in 24-hour formate: " << endl;
        cin >> hours >> minutes >> seconds;
    }

    operator twelveHour()
    {
        int totalSeconds = hours *3600 + minutes  * 60 + seconds;
        int diff = totalSeconds - (12*3600);
        if(diff > 0)
        {
             flag = 1;
            return twelveHour(diff/3600,diff%3600/60,diff%3600%60);
        }
        else
        {
             flag = 0;
            return twelveHour(hours,minutes,seconds);
        }
    }
};


int main()
{
    TwentyFour t24;
    t24.getTime();
    twelveHour t12 = t24;
    t12.showTime();
    return 0;
}