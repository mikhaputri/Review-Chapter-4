//
//  7.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    float seconds;
    
    cout<<"Please input the number of seconds: ";
    cin>>seconds;
    
    if (seconds>=60 && seconds<3600)
    {
        float minutes = seconds/60;
        cout<<"It is "<<minutes<<" minutes."<<endl;
    }
    else if (seconds>=3600 && seconds<86400)
    {
        float hours = seconds/3600;
        cout<<"It is "<<hours<< " hours."<<endl;
    }
    else if (seconds>= 86400)
    {
        float days = seconds/86400;
        cout<<"It is "<<days<<" days."<<endl;
    }
    else
        cout<<"It is "<<seconds<<" seconds."<<endl;
    
    return 0;
}