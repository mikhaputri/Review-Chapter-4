//
//  11.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int answer;
    const int MIN = 1;
    const int MAX = 999;
    
    unsigned seed;
    
    srand(seed);
    
    cout<<"------MATH TUTOR------"<<endl;
    cout<<endl<<endl;
    int x = (rand() % (MAX - MIN + 1)) + MIN;
    int y = (rand() % (MAX - MIN + 1)) + MIN;
    
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<"---- +"<<endl;
    cin>> answer;
    
    int total = x + y;
    if (answer != total)
        cout<<"Wrong. The correct answer is "<<total<<endl;
    else
        cout<<"Congratulation."<<endl;
    
    return 0;
    
}