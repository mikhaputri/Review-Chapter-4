//
//  10.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int month, year;
    
    cout<<"Please input the number of month (1-12): ";
    cin>>month;
    
    if (month<1 || month>12)
        cout<<"Please input the right month."<<endl;
    else
    {
        cout<<"Please input the number of year: ";
        cin>>year;
        
        if (year % 100 == 0 && year % 400 == 0 && month == 2)
            cout<< "29 days."<<endl;
        else if (year % 100 != 0 && year % 4 == 0 && month == 2)
            cout<< "29 days."<<endl;
        else if (month==2)
            cout<<"28 days."<<endl;
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            cout<<"31 days."<<endl;
        else
            cout<<"30 days."<<endl;
    }
    
    return 0;
    
}
