//
//  main.cpp
//  KattisSolving
//
//  Created by Evelio Ornelas Jr. on 12/16/19.
//  Copyright © 2019 Evelio Ornelas Jr. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

void start() {
    int i = 0;
    string s = "";
    char c;
    getline(cin, s);
    while (s[i]) {
      c=s[i];
    if (isupper(c))
        cout << c++;
        i++;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// Autori

