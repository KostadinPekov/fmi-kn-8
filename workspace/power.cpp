#include<iostream>
using namespace std;
int nToTheMthPower(int n,int m)
{
    int result=1;
    for(int i=0;i<m;i++)
    {
        result=result*n;
    }
    return result;
}
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    cout<<nToTheMthPower(n,m);
}
