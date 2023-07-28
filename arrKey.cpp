#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    int arr[n];

    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    for (i=0; i<n; i++)
    {
        if (arr[i]==key)
        {
            cout<<i<<endl;
            break;
        }
    } 
    return 0;
}