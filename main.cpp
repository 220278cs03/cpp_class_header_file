//
//  main.cpp
//  week_2_2
//
//  Created by Gulnoza Sabirjonova on 10/02/23.
//

#include <iostream>
#include "Time.hpp"
#include "Time.cpp"
using namespace std;


int main() {

    Time t(27, 70, 60);
//    t.setHour(27);
//    t.setMinute(70);
//    t.setSecond(60);
    
    cout << t.getHour() << ":" << t.getMinute() << ":" << t.getSecond() << endl;
    return 0;
}
