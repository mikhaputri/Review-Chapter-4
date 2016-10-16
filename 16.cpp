//
//  16.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    string runner1, runner2, runner3;
    int time1, time2, time3;
    
    cout<<"Please enter the name of 3 runners: ";
    cin>>runner1>>runner2>>runner3;
    
    cout<<"Please enter the time it took each runner to finish the race: ";
    cin>>time1>>time2>>time3;
    
    if (time1<time2 && time1<time3)
    {
        cout<<"First: "<<runner1<<endl;
        if (time2<time3)
        {
            cout<<"Second: "<<runner2<<endl;
            cout<<"Third: "<<runner3<<endl;
        }
        else
        {
            cout<<"Second: "<<runner3<<endl;
            cout<<"Third: "<<runner2<<endl;
        }
    }
    else if (time2<time1 && time2<time3)
    {
        cout<<"First: "<<runner2<<endl;
        if (time1<time3)
        {
            cout<<"Second: "<<runner1<<endl;
            cout<<"Third: "<<runner3<<endl;
        }
        else
        {
            cout<<"Second: "<<runner3<<endl;
            cout<<"Third: "<<runner1<<endl;
        }
    }
    else if (time3<time2 && time3<time1)
    {
        cout<<"First: "<<runner3<<endl;
        if (time2<time1)
        {
            cout<<"Second: "<<runner2<<endl;
            cout<<"Third: "<<runner1<<endl;
        }
        else
        {
            cout<<"Second: "<<runner1<<endl;
            cout<<"Third: "<<runner2<<endl;
        }
    }
    
    return 0;
}