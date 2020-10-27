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
    int num1, num2;
    string word;
    int count = 0;
    unordered_set<string> tokens;
    cin >> num1;
    for(int i=0; i<num1; i++) {
        cin >> num2;
        cin.ignore();
        for(int i=0; i<num2; i++) {
            //cin.ignore();
            getline(cin, word);
            tokens.insert(word);
            count++;
        }
        cout << tokens.size() << endl;
        tokens.erase(tokens.begin(), tokens.end());
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// I've Been Everywhere, Man

