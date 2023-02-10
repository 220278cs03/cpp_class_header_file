//
//  Time.hpp
//  week_2_2
//
//  Created by Gulnoza Sabirjonova on 10/02/23.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>

class Time{
    
private:
    int hour;
    int minute;
    int second;
    
public:
    
    Time(int h, int m, int s);
    Time(){};
    
    
    //get
int getHour();
    
int getMinute();
    
int getSecond();
};


#endif /* Time_hpp */
