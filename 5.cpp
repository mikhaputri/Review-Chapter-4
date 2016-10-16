//
//  5.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float weight, height;
    cout<<"Please input your weight in pounds: ";
    cin>> weight;
    
    cout<<"Please input your height in inches: ";
    cin>> height;
    
    float bmi = weight*703/pow(height, 2);
    
    if (bmi>25)
        cout<<"You are overweight."<<endl;
    else if (bmi<18.5)
        cout<<"You are underweight."<<endl;
    else
        cout<<"You have an optimal weight."<<endl;
    
    return 0;
    
}
