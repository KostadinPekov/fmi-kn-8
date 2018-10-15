#include<iostream>
using namespace std;
bool palindromeCheck(int number)
{
    int ncopy=number;
    /*int i=0;//number of digits
    while(ncopy>0)
    {
        ncopy=ncopy/10;
        i++;
    }*/
    int reverseNum=0;
    while(ncopy!=0)
    {
        reverseNum=reverseNum*10+ncopy%10;
        ncopy=ncopy/10;
    }
    if(reverseNum==number) return 1;
    else return 0;
}
int main()
{
    int number;
    cin>>number;
    cout<<palindromeCheck(number);
    return 0;
}
