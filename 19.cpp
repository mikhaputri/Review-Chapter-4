//
//  19.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 16/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double waveLength;
    
    cout<<"Please enter the wavelength of an electromagnetic wave: ";
    cin>>waveLength;
    
    if (waveLength<1E-2)
        cout<<"It would be a Radio waves."<<endl;
    
    else if (waveLength>=1E-2 && waveLength<1E-3)
        cout<<"It would be Microwaves."<<endl;
    
    else if (waveLength>=1E-3 && 7E-7)
        cout<<"It would be an Infrared"<<endl;
    
    else if (waveLength>=7E-7 && waveLength<4E-7)
        cout<<"It would be a Visible light."<<endl;
    
    else if (waveLength>=4E-7 && waveLength<1E-8)
        cout<<"It would be an Ultraviolet."<<endl;
    
    else if (waveLength>=1E-8 && waveLength<1E-11)
        cout<<"It would be an X-Ray."<<endl;
    
    else if (waveLength>=1E-11)
        cout<<"It would be a Gamma rays."<<endl;
    
    return 0;
}
