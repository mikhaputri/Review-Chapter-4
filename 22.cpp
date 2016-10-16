//
//  22.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int temperature;
    
    cout << "Please input the temperature in fahrenheit: ";
    cin >> temperature;
    
    if (temperature<=-173)
        cout<<"Ethyl alcohol will freeze."<<endl;
    else if (temperature>=172)
        cout<<"Ethyl alcohol will boil."<<endl;
    
    if (temperature<=-38)
        cout<<"Mercury will freeze."<<endl;
    else if (temperature>=676)
        cout<<"Mercury will boil."<<endl;
    
    if (temperature<=-362)
        cout<<"Oxygen will freeze"<<endl;
    else if (temperature>=-306)
        cout<<"Oxygen will boil."<<endl;
    
    if (temperature<=32)
        cout<<"Water will freeze."<<endl;
    else if (temperature>=212)
        cout<<"Water will boil."<<endl;
    
        return 0;
}
