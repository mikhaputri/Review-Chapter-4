//
//  3.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int day, month, year;
    
    cout<<"Please enter a date, month, year(2 last digits) in numerical form: ";
    cin>> day>>month>>year;
    
    if (day*month==year)
        cout<<"The date is magic."<<endl;
    else
        cout<<"The date is not magic."<<endl;
    
    return 0;
}
