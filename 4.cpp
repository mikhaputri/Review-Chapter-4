//
//  4.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int length1, width1, length2, width2;
    
    cout<<"Please input the length and width of the first rectangle: ";
    cin>>length1>> width1;
    
    cout<<"Please input the length and width of the second rectangle: ";
    cin>> length2>> width2;
    
    int area1= length1*width1;
    int area2= length2*width2;
    
    if (area1>area2)
        cout<<"The first rectangle has greater area than the second rectangle."<<endl;
    else if (area2>area1)
        cout<<"The second rectangle has greater area than the first rectangle."<<endl;
    else
        cout<<"The area of the first and second rectangle are the same."<<endl;
    
    return 0;
}