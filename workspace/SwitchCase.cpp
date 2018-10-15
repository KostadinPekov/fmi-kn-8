#include<iostream>
using namespace std;
char letterCase(char letter)
{
    if((letter>=65&&letter<=90)||(letter>=97&&letter<=122))
    {
        if(letter>=97) return letter- 32;
        else return letter+32;
    }
    return 1;
}
int main()
{
    char letter;
    cin>>letter;
    cout<<letterCase(letter);
    return 0;
}
