//
//  23.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int choice, radius, width, length, base, height;
    const float pi = 3.14159;
    float area;
    
    const int CIRCLE = 1,
    RECTANGLE = 2,
    TRIANGLE = 3,
    QUIT = 4;
    
    cout<<"Geometry Calculator"<<endl;
    cout<<"1. Calculate the area of a Circle."<<endl;
    cout<<"2. Calculate the area of a Rectangle."<<endl;
    cout<<"3. Calculate the area of a Triangle."<<endl;
    cout<<"4. Quit."<<endl;
    cout<<endl;
    cout<<"Enter your choice (1-4): ";
    cin>>choice;
    
    if (choice==CIRCLE)
    {
        cout<<"Please enter radius of the circle: ";
        cin>> radius;
        
        area = pi*radius*radius;
        
        cout<<"The area is "<<area<<endl;

    }
    else if (choice==RECTANGLE)
    {
        cout<<"Please enter length and width of the rectangle: ";
        cin>>length>>width;
        
        area = length*width;
        
        cout<<"The area is "<<area<<endl;
    }
    else if (choice==TRIANGLE)
    {
        cout<<"Please enter base and height of the triangle; ";
        cin>>base>>height;
        
        area = base*height*0.5;
        
        cout<<"The area is "<<area<<endl;
    }
    else if (choice==QUIT)
        return 0;
    else
        cout<<"Invalid data. Must be choose from the menu."<<endl;
    
    return 0;
}