//
//  main.cpp
//  KattisSolving
//
//  Created by Evelio Ornelas Jr. on 12/16/19.
//  Copyright © 2019 Evelio Ornelas Jr. All rights reserved.
//

#include <iostream>

using namespace std;

void start() {
    string x, y;
    cin >> x >> y;
    if(x.length() < y.length())
        cout << "no" << endl;
    else
        cout << "go" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// Aaah!

