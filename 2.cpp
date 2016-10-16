//
//  2.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout<<"Please enter number between 1 - 10: ";
    cin>>number;
    
    switch (number)
    {
        case 1: cout<<"I"<<endl;
            break;
        case 2: cout<<"II"<<endl;
            break;
        case 3: cout<<"III"<<endl;
            break;
        case 4: cout<<"IV"<<endl;
            break;
        case 5: cout<<"V"<<endl;
            break;
        case 6: cout<<"VI"<<endl;
            break;
        case 7: cout<<"VII"<<endl;
            break;
        case 8: cout<<"VIII"<<endl;
            break;
        case 9: cout<<"IX"<<endl;
            break;
        case 10: cout<<"X"<<endl;
            break;
        default: cout<< "You can only enter number between 1 to 10."<<endl;
            break;
    }
    
    return 0;
}
