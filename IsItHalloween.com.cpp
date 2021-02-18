//
//  main.cpp
//  KattisSolving
//
//  Created by Evelio Ornelas Jr. on 12/16/19.
//  Copyright © 2019 Evelio Ornelas Jr. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void start() {
    string date;
    getline(cin, date);
    if((date == "OCT 31") || (date == "DEC 25")) {
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// IsItHalloween.com

