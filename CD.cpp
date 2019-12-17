//
//  main.cpp
//  CD
//
//  Created by Evelio Ornelas Jr. on 9/20/19.
//  Copyright © 2019 Evelio Ornelas Jr. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void start() {
    int x, y;
    while(cin >> x >> y && x&&y  != 0) {
        int num;
        vector<int> a, b, intersection;
        for(int i=0; i<x; i++) {
            cin >> num;
            a.push_back(num);
        }
        for(int i=0; i<y; i++) {
            cin >> num;
            b.push_back(num);
        }
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(intersection));
        cout << intersection.size() << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
