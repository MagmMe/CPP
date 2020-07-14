//
//  main.cpp
//  LearningCPP
//
//  Created by Marcin Magiera on 13/07/2020.
//  Copyright © 2020 Magme Agency. All rights reserved.
//

#include <iostream>

int uczniowie;
int cukierki;
int x;
int y;

int main() {
    std::cout << "Ile uczniow jest w klasie?:\n";
    std::cin >> uczniowie;
    std::cout << "Ile masz cukierkow?:\n";
    std::cin >> cukierki;
    
    x = cukierki / (uczniowie - 1);
    std::cout << "Kazdy z uczniow dostanie: " << x  <<std::endl;
    
    y = cukierki - x * (uczniowie - 1);
    std::cout << "Tobie zostanie: " << y  <<std::endl;
    
    return 0;
}
