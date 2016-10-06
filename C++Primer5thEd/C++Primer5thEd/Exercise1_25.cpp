//
//  Exercise1_25.cpp
//  C++Primer5thEd
//
//  Created by Erik Martines Sanches on 2016-10-06.
//  Copyright © 2016 Erik Martines Sanches. All rights reserved.
//

#include <stdio.h>


#include <iostream>
#include "Sales_item.h"
void exercise1_25()
{
    Sales_item total; // variable to hold data for the next transaction // read the first transaction and ensure that there are data to process
    if (std::cin >> total) {
        Sales_item trans; // variable to hold the running sum // read and process the remaining transactions
        while (std::cin >> trans) {
            // if we're still processing the same book
            if (total.isbn() == trans.isbn())
                total += trans; // update the running total
            else {
            // print results for the previous book
            std::cout << total << std::endl;
            total = trans; // total now refers to the next book
        }
    }
    
    std::cout << total << std::endl; // print the last transaction
    } else {
    // no input! warn the user
    std::cerr << "No data?!" << std::endl; // indicate failure
    }
}
