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
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++) {
        string s = "";
        getline(cin, s);
        if(s.find("Simon says") == 0) {
            s.erase(0, 11);
            cout << s << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// Simon Says

