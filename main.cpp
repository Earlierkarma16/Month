#include <iostream>
using namespace std;
int main()
{
    int month;
    int year;

    cout<<"Please input the month in integer format: ";
    cin>> month;
    cout<<"Please input the year in integer format: ";
    cin>> year;
switch (month){
    case 1:
        cout<<"There are 31 days in this month " << endl;
        break;
    case 2:
        if (year % 100==0)
            if (year % 400==0)
                cout<<"There are 29 days in this month" << endl;
            else
                cout<<"There are 28 days in this month"<< endl;
        else if (year % 4==0)
            cout<<"There are 29 days in this month"<< endl;
        else
            cout<<"There are 28 days in this month" << endl;
            break;
    case 3:
        cout<<"There are 31 days in this month" << endl;
        break;
    case 4:
        cout<<"There are 30 days in this month" << endl;
        break;
    case 5:
         cout<<"There are 31 days in this month" << endl;
        break;
    case 6:
        cout<<"There are 30 days in this month" << endl;
        break;
    case 7:
        cout<<"There are 31 days in this month" << endl;
        break;
    case 8:
        cout<<"There are 31 days in this month" << endl;
        break;
    case 9:
        cout<<"There are 30 days in this month" << endl;
        break;
    case 10:
        cout<<"There are 31 days in this month" << endl;
        break;
    case 11:
        cout<<"There are 30 days in this month" << endl;
        break;
    case 12:
        cout<<"There are 31 days in this month" << endl;
        break;
}
    return 0;
}