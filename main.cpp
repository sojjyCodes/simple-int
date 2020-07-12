#include<iostream>
using namespace std;
int main()
{
    int Pricipal, Rate, Time, Interest;

    cout<<"Enter ther principal: ";
    cin>>Pricipal;

    cout<<"Enter Rate: ";
    cin>>Rate;

    cout<<"Enter Time: "; 
    cin>>Time;

    Interest = (Pricipal* Rate*Time)/100;

    cout<<"Interst == "<<Interest;
    return 0;

}