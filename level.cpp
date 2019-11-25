// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: November 2019
// This program tells the percent of a level inputted

#include <iostream>
#include <string>

std::string CalculatePercent(std::string level) {
    // calculate percent
    std::string percent;

    if (level == "4+") {
        percent = "97%";
    } else if (level == "4") {
        percent = "90%";
    } else if (level == "4-") {
        percent = "83%";
    } else if (level == "3+") {
        percent = "78%";
    } else if (level == "3") {
        percent = "74%";
    } else if (level == "3-") {
        percent = "71%";
    } else if (level == "2+") {
        percent = "68%";
    } else if (level == "2") {
        percent = "64%";
    } else if (level == "2-") {
        percent = "61%";
    } else if (level == "1+") {
        percent = "58%";
    } else if (level == "1") {
        percent = "54%";
    } else if (level == "1-") {
        percent = "51%";
    } else if (level == "R") {
        percent = "30%";
    } else {
        percent = ("undefined");
    }

    return percent;
}


main() {
    // this function gets level and calls other functions
    std::string percent;
    std::string levelUser;
    std::string calculatePercent;

    std::cout << "Enter your level: ";
    std::cin >> levelUser;
    std::cout << std::endl;

    percent = CalculatePercent(levelUser);

    std::cout << "Your percent is " << percent << std::endl;
}
