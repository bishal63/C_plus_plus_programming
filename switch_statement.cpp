#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    cout<<"enter the any integer numbers:";
    cin>>a;
    switch(a)
    {
        case 0:
        cout<<"1";
        break;
        case 1:
        cout<<"one";
        break;
        case 2:
        cout<<"two";
        break;
        case 3:
        cout<<"three";
        break;
        case 4:
        cout<<"four";
        break;
        case 5:
        cout<<"five";
        break;
        case 6:
        cout<<"six";
        break;
        case 7:
        cout<<"seven";
        break;
        case 8:
        cout<<"eight";
        break;
        case 9:
        cout<<"nine";
        break;
        default:
        cout<<"not a digit";
    }
    getch();
}