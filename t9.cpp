#include <iostream>
using namespace std;

void timeTravel(int hour, int min);

main()
{
    int hour, min;
    cout << "Enter Hours: ";
    cin >> hour;
    cout << "Enter Minutes: ";
    cin >> min;
    timeTravel(hour, min);
}

void timeTravel(int hour, int min)
{
    min += 15;
    if (min > 59)
    {
        hour ++;
        min -= 60;
    }
    if (hour > 23)
    {
        hour = 0;
    }
    cout<<hour<<":"<<min;
}