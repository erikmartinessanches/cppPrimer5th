//
//  Exercise1_9.cpp
//  C++Primer5thEd
//
//  Created by Erik Martines Sanches on 2016-10-06.
//  Copyright © 2016 Erik Martines Sanches. All rights reserved.
//

#include <iostream>

void exercise1_9(){
    int sum = 0;
    int val = 50;
    while (val <= 100){
        std::cout << "Summing " << sum << " and " << val <<"." << std::endl;
        sum += val;
        val++;
    }
    
    std::cout << "Total sum: "<< sum << std::endl;
}
