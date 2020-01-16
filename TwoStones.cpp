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
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// Lost Map
