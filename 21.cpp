//
//  21.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int choice, time;
    float distance;
    
    const int CO2 = 1,
    AIR = 2,
    HELIUM = 3,
    HYDROGEN = 4;
    
    cout<<"Medium"<<"\t\t\t\t"<<"Speed (Meters per Second)"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"1. Carbon Dioxide"<<"\t"<<"258.0"<<endl;
    cout<<"2. Air"<<"\t\t\t\t"<<"331.5"<<endl;
    cout<<"3. Helium"<<"\t\t\t"<<"972.0"<<endl;
    cout<<"4. Hydrogen"<<"\t\t\t"<<"1,270.0"<<endl;
    cout<<"--------------------------------------------"<<endl;
    
    cout<<"Please choose from the menu above: ";
    cin>>choice;
    
    if (choice==CO2)
    {
        cout<<"Please enter the number of seconds it took for the sound to travel: ";
        cin>>time;
        
        if (time<0 || time>30)
            cout<<"Time cannot be less than 10 or greater than 30."<<endl;
        else
        {
            distance = time * 258.0;
            cout<<"The total time taken is "<<distance<<"m."<<endl;
        }
    }
    else if (choice==AIR)
    {
        cout<<"Please enter the number of seconds it took for the sound to travel: ";
        cin>>time;
        
        if (time<0 || time>30)
            cout<<"Time cannot be less than 10 or greater than 30."<<endl;
        else
        {
            distance = time * 331.5;
            cout<<"The total time taken is "<<distance<<"m."<<endl;
        }

    }
    else if (choice==HELIUM)
    {
        cout<<"Please enter the number of seconds it took for the sound to travel: ";
        cin>>time;
        
        if (time<0 || time>30)
            cout<<"Time cannot be less than 10 or greater than 30."<<endl;
        else
        {
            distance = time * 972.5;
            cout<<"The total time taken is "<<distance<<"m."<<endl;
        }

    }
    else if (choice==HYDROGEN)
    {
        cout<<"Please enter the number of seconds it took for the sound to travel: ";
        cin>>time;
        
        if (time<0 || time>30)
            cout<<"Time cannot be less than 10 or greater than 30."<<endl;
        else
        {
            distance = time * 1270;
            cout<<"The total time taken is "<<distance<<"m."<<endl;
        }

    }
    else
        cout<<"Invalid data. Must choose one from the menu."<<endl;
    
    return 0;
    
}