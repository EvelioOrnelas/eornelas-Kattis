//
//  main.cpp
//  TestingSolutions
//
//  Created by Evelio Ornelas Jr. on 12/16/19.
//  Copyright © 2019 Evelio Ornelas Jr. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s = "";
    getline(cin, s);
    if (s.find("ss") == -1)
        cout << "no hiss" << endl;
    else
        cout << "hiss" << endl;
    return 0;
}
