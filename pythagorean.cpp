#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool pyt(int x,int y,int z)
{
    int h = max(x, max(y,z));
    int b,p;

    if (h==x)
    {
        b=y;
        p=z;
    }
    else if (h==y)
    {
        b=x;
        p=z;
    }
    else
    {
        b=x;
        p=y;
    }

    if (h*h == b*b + p*p)
    {
        return true;
    }
    else{
        return false;
    }        
}


int32_t main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if (pyt(x,y,z))
    {
        cout<<"Pythagorean Triplet"<<endl;
    }
    else
    {
        cout<<"Not"<<endl;
    }

    return 0;
}