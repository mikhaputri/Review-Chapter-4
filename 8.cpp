//
//  8.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    string colour1, colour2;
    
    cout<<"Please enter two primary colours (red, blue or yellow): ";
    cin>>colour1>>colour2;
    
    if (colour1=="red" && colour2=="blue")
        cout<<"The mix of that two colour is purple."<<endl;
    else if (colour1=="blue" && colour2=="red")
        cout<<"The mix of that two colour is purple."<<endl;
    else if (colour1=="red" && colour2=="yellow")
        cout<<"The mix of that two colour is orange."<<endl;
    else if ( colour1=="yellow" && colour2=="red")
        cout<<"The colour of that two colours is orange."<<endl;
    else if (colour1=="blue" && colour2=="yellow")
        cout<<"The mix of that two colours is green."<<endl;
    else if ( colour1=="yellow" && colour2=="blue")
        cout<<"The mix of that two colours is green." <<endl;
    else
        cout<<"That are not primary colour."<<endl;
    
    return 0;
    
}
