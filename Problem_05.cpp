// Program to convert time (hour, minute and second) in 12-hr format to
// 24-hr format.

#include <iostream>
#include <cstring>
using namespace std;

int flag;
class TwentyFour
{
    int hours, minutes, seconds;

public:
    TwentyFour(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void showTime()
    {
        if (flag)
        {
            cout << "Time in 24 hour formate is : " << endl;
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }
        else
        {
            cout << "Time formate is not matched." << endl;
        }
    }
};
class twelveHour
{
    int hours, minutes, seconds;
    char phase[3];

public:
    twelveHour(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
    void getTime()
    {
        cout << "Enter the time in HH:MM:SS (am/pm) formate in 12-hour formate: " << endl;
        cin >> hours >> minutes >> seconds >> phase;
    }
    operator TwentyFour()
    {
        if (!strcmp("am", phase) || !strcmp("AM",phase))
        {
            flag = 1;
            return TwentyFour(hours, minutes, seconds);
        }
        else if (!strcmp("pm", phase) || !strcmp("PM",phase))
        {
            flag = 1;
            return TwentyFour(hours + 12, minutes, seconds);
        }
        else
        {
            flag = 0;
        }
    }
};

int main()
{
    twelveHour t12;
    t12.getTime();
    TwentyFour t24 = t12;
    t24.showTime();
    return 0;
}