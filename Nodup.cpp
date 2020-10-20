//
//  main.cpp
//  KattisSolving
//
//  Created by Evelio Ornelas Jr. on 12/16/19.
//  Copyright © 2019 Evelio Ornelas Jr. All rights reserved.
//

#include <iostream>
#include <string>
#include <unordered_set>
#include <sstream>

using namespace std;

void start() {
    string phrase;
    string buffer;
    int count = 0;
    unordered_set<string> tokens;
    getline(cin, phrase);
    stringstream ss(phrase);
    while(ss >> buffer) {
        tokens.insert(buffer);
        count++;
    }
    if (tokens.size() == count) {
        cout << "yes" << endl;
      }
    else {
        cout << "no" << endl;
      }
}
int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// No Duplicates

