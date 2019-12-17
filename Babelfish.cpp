//
//  main.cpp
//  Babelfish
//
//  Created by Evelio Ornelas Jr. on 9/6/19.
//  Copyright © 2019 Evelio Ornelas Jr. All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

void start() {
    string s, str, english, foreign = "";
    unordered_map<string, string> words;
    while(getline(cin, str) && str != "") {
        stringstream s(str);
        s >> english;
        s >> foreign;
        words[foreign] = english;
    }
    
    while (getline(cin, str)) {
        auto search = words.find(str);
        if (search != words.end())
            cout << words.find(str)->second << endl;
        else
            cout << "eh" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
