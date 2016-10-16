//
//  14.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    double initialBalance, total, monthlyCharge;
    int noOfChecks;
    
    cout<<"Please input your initial balance: ";
    cin>>initialBalance;
    
    cout<<"Please input the number of checks: ";
    cin>>noOfChecks;
    if (noOfChecks<0)
        cout<<"Invalid. Number of check cannot be negative number.";
    
    if (initialBalance<400)
        monthlyCharge = initialBalance + 10 + 15;
    else
        monthlyCharge = initialBalance + 10;
    
    // counting no of checks
    if (noOfChecks<20)
    {
        total = monthlyCharge+0.1;
        cout<<"Total service fees this month is $"<<total<<endl;
    }
    else if (noOfChecks>=20 && noOfChecks<40)
    {
        total = monthlyCharge+0.8;
        cout<<"Total service fees this month is $"<<total<<endl;
    }
    else if (noOfChecks>=40 && noOfChecks<60)
    {
        total = monthlyCharge+0.6;
        cout<<"Total sevice fees this month is $"<<total<<endl;
    }
    else
    {
        total = monthlyCharge+ 0.4;
        cout<<"The total service fees this month is $"<<total<<endl;
    }
    
    return 0;
  
}
