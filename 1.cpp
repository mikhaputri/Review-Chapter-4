//
//  1.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    
    cout<<"Please enter the first number: ";
    cin>> num1;
    cout<<"Please enter the second number: ";
    cin>>num2;
    
    if (num1>num2)
        cout<<num1<<" is greater than "<<num2<<endl;
    else
        cout<<num2<<" is greater than "<<num1<<endl;
    
    return 0;
}
