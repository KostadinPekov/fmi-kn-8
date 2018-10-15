#include<iostream>
using namespace std;
void weekday(int day,int month)
{
    int dayofweek=0;
    switch(month)
    {
        case 1:dayofweek=day;break;
        case 2: dayofweek=31+day;break;
        case 3: dayofweek=31+28+day;break;
        case 4: dayofweek=2*31+28+day;break;
        case 5: dayofweek=2*31+28+30+day;break;
        case 6: dayofweek=3*31+28+30+day;break;
        case 7: dayofweek=3*31+28+2*30+day;break;
        case 8: dayofweek=4*31+28+2*30+day;break;
        case 9: dayofweek=4*31+28+3*30+day;break;
        case 10: dayofweek=5*31+28+3*30+day;break;
        case 11: dayofweek=5*31+28+4*30+day;break;
        case 12: dayofweek=6*31+28+4*30+day;break;
        defaut: cout<<"incorrect input"<<endl;break;
    }
    dayofweek=dayofweek%7;
    switch(dayofweek)
    {
        case 1: cout<<"monday"<<endl;break;
        case 2: cout<<"tuesday"<<endl;break;
        case 3: cout<<"wednesday"<<endl;break;
        case 4: cout<<"thursday"<<endl;break;
        case 5: cout<<"friday"<<endl;break;
        case 6: cout<<"Saturday"<<endl;break;
        case 7: cout<<"sunday"<<endl;break;
    }

}
int main()
{
    int day,month;
    cin>>day;
    cin>>month;
    weekday(day,month);
}
