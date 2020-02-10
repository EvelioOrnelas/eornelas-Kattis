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
    int x, y, n;
    cin >> x >> y >> n;
    for(int i=1; i<=n;i++) {
        if(i%x == 0 && i%y == 0) {
            cout << "FizzBuzz" << endl;
        }
        else if(i%x == 0) {
            cout << "Fizz" << endl;
        }
        else if(i%y == 0) {
            cout << "Buzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// FizzBuzz

