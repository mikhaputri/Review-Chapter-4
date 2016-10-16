//
//  18.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    float calories, fatGrams;
    int const oneFatGram = 9; // per calories
    
    cout<<"Please enter the total calories of a food: ";
    cin>>calories;
    
    cout<<"Please enter the fat grams: ";
    cin>>fatGrams;
    
    if (calories<0 || fatGrams<0)
    {
        cout<<"The amount of total calories and fat grams cannot be less than 0."<<endl;
        return 0;
    }
    
    float caloriesFat = fatGrams * oneFatGram;
    float percentageCaloriesFat = caloriesFat/calories;
    
    if (caloriesFat>calories)
    {
        cout<<"The number of calories from fat cannot be greater than the total calories."<<endl;
        return 0;
    }
    
    if (percentageCaloriesFat<0.3)
        cout<<"This food is low in fat."<<endl;
    else
        cout<<"This food is not low in fat."<<endl;
    
    return 0;
    
}