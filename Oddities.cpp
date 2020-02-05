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
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        if(x%2 == 0)
        cout << x << " is even" << endl;
        else
            cout << x << " is odd" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// Oddities
