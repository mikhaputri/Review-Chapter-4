//
//  25.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    char choice;
    int minutes;
    float total,totalCharge;
    
    cout<<"Which mobile service package did you choose? (A, B or C)"<<endl;
    cin>>choice;
    
    cout<<"How many minutes were used? "<<endl;
    cin>>minutes;
    
    switch (choice)
    {
        case 'a':
        case 'A': total = 39.99;
            if (minutes<=450)
                cout<<"The total bill is $"<<total<<endl;
            else
            {
                totalCharge=total+(minutes-450)*0.45;
                cout<<"The total bill is $"<<totalCharge<<endl;
            }
            break;
            
        case 'b':
        case 'B': total = 59.99;
            if (minutes<=900)
                cout<<"The total bill is $"<<total<<endl;
            else
            {
                totalCharge=total+(minutes-900)*0.4;
                cout<<"The total bill is $"<<totalCharge<<endl;
            }
            break;
            
        case 'c':
        case 'C': total = 69.99;
            cout<<"The total bill is $"<<total<<endl;
            break;
            
        default : cout<<"You can only choose A, B or C."<<endl;
    }
    return 0;
}
