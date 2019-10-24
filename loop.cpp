// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program uses a while loop to add integers

#include <iostream>

main() {
    // this function uses a while loop to add integers
    int integer;
    int loopAdder = 0;
    int answer = 0;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> integer;

    // process
    while (loopAdder <= integer) {
        answer = answer + loopAdder;
        loopAdder = loopAdder + 1;
    }

    // Output
    std::cout << "The answer is: " << answer << std::endl;
}
