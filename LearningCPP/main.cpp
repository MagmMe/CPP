//
//  main.cpp
//  LearningCPP
//
//  Created by Marcin Magiera on 13/07/2020.
//  Copyright © 2020 Magme Agency. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    
    int mojaZmienna = 100;
    int mojaZmienna2 (100);
    int mojaZmienna3 ={100};
    int mojaZmienna4 {400};
    bool mojaZmienna5;
    mojaZmienna5 = 3;   // return 0 or 1
    
    int mojaZmienna6 = 1'234'556'789;
    long long mojaZmienna7 = 123'455'666'778'893'456;
    
    cout << mojaZmienna << endl;
    cout << mojaZmienna2 << endl;
    cout << mojaZmienna3 << endl;
    cout << mojaZmienna4 << endl;
    
    cout << mojaZmienna5 << endl;
    cout << mojaZmienna6 << endl;
    cout << mojaZmienna7 << endl; 
    
    return 0;
}

