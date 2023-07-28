#include<iostream>
using namespace std;

int main()
{
    int n=1;
    for(n; n<=100; n++)
    {
        if(n%3==0)
        {
            continue;
        }
        cout<<n<<endl;
    }


    return 0;
}