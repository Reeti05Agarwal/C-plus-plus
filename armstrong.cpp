#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n;

    int sum=0;
    while (temp>0)
    {
        sum+= pow(temp%10,3);
        temp=temp/10;
    }
    if (sum==n)
    {
        cout<<"armstrong\n";
    }
    else
    {
        cout<<"not an armstrong\n";
    }

    return 0;
}