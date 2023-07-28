#include<iostream>
using namespace std;

int main()
{
    int n1,i;
    cin>>n1;

    int fact1=1;
    for (i=2; i<=n1; i++)
    {
        fact1=fact1*i;
    }
    cout<<fact1<<endl;

    return 0;
}