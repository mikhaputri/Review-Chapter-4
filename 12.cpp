//
//  12.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int const cost = 99;
    int quantity;
    float totalAfterDisc;

    cout<<"Please input the quantity of package sold: ";
    cin>> quantity;
    
    int total = quantity*cost;
    
    if (quantity<0)
        cout<<"Quantity must be greater than 0.";
    else if (quantity<10)
    {
        cout<<"The total cost is $"<<total<<"."<<endl;
    }
    else if (quantity>= 10 && quantity<20)
    {
        totalAfterDisc = total*0.8; // disc 20%
        cout<<"The total cost is $"<<totalAfterDisc<<"."<<endl;
    }
    else if (quantity>=20 && quantity<50)
    {
        totalAfterDisc = total*0.7; // disc 30%
        cout<<"The total cost is $"<<totalAfterDisc<<"."<<endl;
    }
    else if (quantity>=50 && quantity<100)
    {
        totalAfterDisc=total*0.6; // disc 40%
        cout<<"The total cost is $"<<totalAfterDisc<<"."<<endl;
    }
    else
    {
        totalAfterDisc=totalAfterDisc*0.5; // disc 50%
        cout<<"the total cost is $"<<totalAfterDisc<<"."<<endl;
    }
    
    return 0;
}
