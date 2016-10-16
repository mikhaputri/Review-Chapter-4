//
//  20.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int choice;
    unsigned int distance;
    float time;
    
    const int AIR = 1,
    WATER = 2,
    STEEL = 3;
    
    cout<<"Medium"<<"\t\t\t"<<"Speed"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"1. Air"<<"\t\t\t"<<"1,100 feet per second"<<endl;
    cout<<"2. Water"<<"\t\t"<<"4,900 feet per second"<<endl;
    cout<<"3. Steel"<<"\t\t"<<"16,400 feet per second"<<endl;
    cout<<"---------------------------------------"<<endl;
    
    cout<<"Please choose one of the menu: ";
    cin>>choice;
    
    if(choice==AIR)
    {
        cout<<"Please enter the distance a sound wave will travel (in feets): ";
        cin>>distance;
        
        time = distance/1100;
        cout<<"The total time taken will be "<<time<<"s"<<endl;
    }
    else if(choice==WATER)
    {
        cout<<"Please enter the distance a sound wave will travell (in feets): ";
        cin>>distance;
        
        time = distance/4900;
        cout<<"The total time taken will be "<<time<<"s"<<endl;
    }
    else if (choice==STEEL)
    {
        cout<<"Please enter the distance a sound wave will travel (in feets): ";
        cin>>distance;
        
        time = distance/16400;
        cout<<"The total time taken will be "<<time<<"s"<<endl;
    }
    else
        cout<<"Invalid data. Must choose one of the menu."<<endl;
    
    return 0;
}