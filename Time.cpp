//
//  Time.cpp
//  week_2_2
//
//  Created by Gulnoza Sabirjonova on 10/02/23.
//

#include "Time.hpp"


Time(int h, int m, int s){
    
    m = m + s/60;
    s = s % 60;;
    
    if(s < 0){
        s = 60 + s;
        m--;
    }
    
    h += m/60;
    m = m % 60;
    
    if(m<0){
        m+=60;
        h--;
    }
    h%=24;
    if(h<0){
        h+=24;
    }
};
int Time :: getHour(){
    return hour;
}

int Time :: getMinute(){
    return minute;
}

int Time :: getSecond(){
    return second;
}

//set
//    void setHour(int hour){
//        if(hour >= 24) this -> hour = hour - 24;
//        else this -> hour = hour;
//    }
//
//    void setMinute(int minute){
//        while(minute >= 60){
//            minute -= 60;
//            hour += 1;
//        }
//        this -> minute = minute;
//    }
//
//    void setSecond(int second){
//        while(second >= 60){
//            second -= 60;
//            minute += 1;
//        }
//        this -> second = second;
//    }
