#include<iostream>
using namespace std;
void factors(int n,int m)
{
    while(n>0)
    {
        if(n%m==0)
        {
            cout<<n<<endl;
        }
        n=n-1;
    }
}
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    factors(n,m);
}
