//
//  15.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    float weight, distance, total;
    
    cout<<"Please input the weight for the package (in kilograms): ";
    cin>>weight;
    
    cout<<"Please input the distance the package is to be shipped (in miles): ";
    cin>>distance;
   
    // caluculate total shipping cost
    if (weight<= 0 || weight >20)
        cout<< "The weight doesn't meet the shipping minimum and maximum weight."<<endl;
    
    else if (distance<10 || distance>3000)
        cout<<"The distance doesn't meet the shipping minimum and maximum distance."<<endl;
    
    else if (weight<=2)
    {
        total = distance/500 * 1.1;
        cout<<"The total shipping cost is $"<<total<<endl;
    }
    else if (weight>2 && weight<=6)
    {
        total = distance/500 * 2.2;
        cout<<"The total shipping cost is $"<<total<<endl;
    }
    else if (weight>6 && weight<=10)
    {
        total = distance/500 * 3.7;
        cout<<"The total shipping cost is $"<<total<<endl;
    }
    else
    {
        total = distance/500 * 4.8;
        cout<<"The total shipping cost is $"<<total<<endl;
    }
    
    return 0;

}