#include<iostream>
using namespace std;
void inputPlayer(int &pl1,int &pl2)
{
    cout<<"1=rock,2=papper,3=scissors"<<endl;
    cin>>pl1;
    cin>>pl2;
}
int checkWinner(int pl1,int pl2)
{
    if(pl1==1)
    {
        if(pl2==1) return 0;
        if(pl2==2) return -1;
        if(pl2==3) return 1;
    }
    if(pl1==2)
    {
        if(pl2==1) return -1;
        if(pl2==2) return 0;
        if(pl2==3) return 1;
    }
    if(pl1==3)
    {
        if(pl2==1) return 1;
        if(pl2==2) return -1;
        if(pl2==3) return 0;
    }
}
void victoryCount(int pl1,int pl2)
{
    int v1=0,v2=0;
    bool newgame;
    cin>>newgame;
    while(newgame==1)
    {
        inputPlayer(pl1,pl2);
        if(checkWinner(pl1,pl2)==-1) v2++;
        if(checkWinner(pl1,pl2)==1) vl++;
        cin>>newgame;
    }
}
int main()
{
    int pl1,pl2;
    cout<<"1=rock,2=papper,3=scissors"<<endl;
    cin>>pl1;
    cin>>pl2;
    checkWinner(pl1,pl2);
}
