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
    int n, r, e, c;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> r >> e >> c;
        if(e - c > r) {
            cout << "advertise" << endl;
        }
        else if(e - c == r) {
            cout << "does not matter" << endl;
        }
        else
            cout << "do not advertise" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// Nasty Hacks

