//
//  6.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    float mass;
    
    cout<<"Please enter mass of an object in kilograms: ";
    cin>> mass;
    
    float weight = mass*9.8;
    
    if (weight>1000)
        cout<<"The object is too heavy."<<endl;
    else if (weight<10)
        cout<<"The object is too light."<<endl;
    else
        cout<<"The object weight is "<<weight<<endl;
    
    return 0;
}
