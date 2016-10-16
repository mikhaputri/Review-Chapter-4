//
//  17.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    string name;
    int date1, date2, date3, vault1, vault2, vault3;
    
    cout<<"Please enter the vaulter name: ";
    cin>> name;
    
    cout<<"Please enter three vault height between 2 - 5: ";
    cin>>vault1>>vault2>>vault3;
    if (vault1<2 || vault2<2 || vault3<2 || vault1>5 || vault2>5 || vault3>5)
    {
        cout<<"Invalid data. Must be between 2 and 5."<<endl;
        return 0;
    }
    
    cout<<"Please enter the date of the three vaults were made: ";
    cin>>date1>>date2>>date3;
    
    if (vault1>vault2 && vault1>vault3)
    {
        cout<<"First: "<<vault1<<"m on "<<date1<<endl;
        if(vault2>vault3)
        {
            cout<<"Second: "<<vault2<<"m on "<<date2<<endl;
            cout<<"Third: "<<vault3<<"m on "<<date3<<endl;
        }
        else
        {
            cout<<"Second: "<<vault3<<"m on "<<date3<<endl;
            cout<<"Third: "<<vault2<<"m on "<<date2<<endl;
        }
    }
    else if (vault2>vault1 && vault2>vault3)
    {
        cout<<"First: "<<vault2<<"m on "<<date2<<endl;
        if (vault1>vault3)
        {
            cout<<"Second: "<<vault1<<"m on "<<date1<<endl;
            cout<<"Third: "<<vault3<<"m on "<<date3<<endl;
        }
        else
        {
            cout<<"Second: "<<vault3<<"m on "<<date3<<endl;
            cout<<"Third: "<<vault1<<"m on "<<date1<<endl;
        }
    }
    else if (vault3>vault1 && vault3>vault2)
    {
        cout<<"First: "<<vault3<<"m on "<<date3<<endl;
        if (vault2>vault1)
        {
            cout<<"Second: "<<vault2<<"m on "<<date2<<endl;
            cout<<"Third: "<<vault1<<"m on "<<date1<<endl;
        }
        else
        {
            cout<<"Second: "<<vault1<<"m on "<<date1<<endl;
            cout<<"Third: "<<vault2<<"m on "<<date2<<endl;
        }
    }

    return 0;
}