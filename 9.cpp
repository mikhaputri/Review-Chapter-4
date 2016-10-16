//
//  9.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int pennies, nickels, dimes, quarters;
    
    cout<<"Please enter the amount of pennies: ";
    cin>> pennies;
    
    cout<<"Please enter the amount of nickles: ";
    cin>> nickels;
    
    cout<<"Please enter the amount of dimes: ";
    cin>>dimes;
    
    cout<<"Please enter the amount of quarters: ";
    cin>>quarters;
    
    int const dollar = 100;
    int nickelsToCent = nickels*5;
    int dimesToCent = dimes*10;
    int quartersToCent = quarters*25;
    
    int total = pennies+nickelsToCent+dimesToCent+quartersToCent;
    
    if (total<dollar)
        cout<<"The total amount is less than one dollar."<<endl;
    else if (total>dollar)
        cout<<"The total amount is more than one dollar."<<endl;
    else
        cout<<"Congratulation! The total amount is exactly one dollar."<<endl;
    
    return 0;
}
