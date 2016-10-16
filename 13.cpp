//
//  13.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    unsigned int noOfBooks;
    
    cout<<"Please input the number of books purchased this month: ";
    cin>>noOfBooks;
    
    switch (noOfBooks)
    {
        case 0: cout<<"Point: 0"<<endl;
            break;
        case 1: cout<<"Point: 5"<<endl;
            break;
        case 2: cout<<"Point: 15"<<endl;
            break;
        case 3: cout<<"Point: 30"<<endl;
            break;
    }
    
    if( noOfBooks>= 4)
        cout<<"Point: 60"<<endl;
    
    return 0;
}
