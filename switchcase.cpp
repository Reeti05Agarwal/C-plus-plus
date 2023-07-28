#include<iostream>
using namespace std;



int main()
{
    

    char button;
    cout<<"input a character: ";
    cin>>button;

    /*
    WITHOUT SWITCH

    if (button=='a')
    {
        cout<<"Hello\n";
    }
    else if (button=='b')
    {
        cout<<"Namaste\n";
    }
    else if (button=='c')
    {
        cout<<"salut\n";
    }
    else if (button=='d')
    {
        cout<<"Hola\n";
    }
    else if (button=='e')
    {
        cout<<"Ciao\n";
    }
    else
    {
        cout<<"I am still learning more\n";
    }
    */

   //WITH SWITCH

    switch (button)
    {
    case 'a':
        cout<<"Hello\n";
        break;
    case 'b':
        cout<<"Namaste\n";
        break;
    case 'c':
        cout<<"Salut\n";
        break;        
    case 'd':
        cout<<"Hola\n";
        break;
    case 'e':
        cout<<"Ciao\n";
        break;       

    
    default:
    cout<<"I am still learning more\n";
        break;
    }


    return 0;
}




