#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i=0; i<=n; i++)
    {
        cin>>arr[i];
    }

    for (int i=0; i<=n; i++)
    {
        cout<<arr[i]<<" \n";
    }

    int maxno= INT_MIN;
    int minno=INT_MAX;

    for (int i=0; i<=n; i++)
    {
        maxno=max(maxno, arr[i]);
        minno=min(minno, arr[i]);
    }

    cout<<"max no: "<<maxno<<endl;
    cout<<"min no: "<<minno<<endl;

    return 0;
}