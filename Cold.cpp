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
    int n, t, a=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> t;
        if(t<0) a++;
    }
    cout << a << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// Cold
