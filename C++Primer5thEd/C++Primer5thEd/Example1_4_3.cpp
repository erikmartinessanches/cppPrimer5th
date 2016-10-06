//
//  Example1_4_3.cpp
//  C++Primer5thEd
//
//  Created by Erik Martines Sanches on 2016-10-06.
//  Copyright © 2016 Erik Martines Sanches. All rights reserved.
//

#include <stdio.h>
void example1_4_3(){
    int sum = 0, value = 0;
    // read until end-of-file (Ctrl+d on unix, Ctrl+z on windows), calculating a running total of all values read
    while (std::cin >> value)
    sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
}
