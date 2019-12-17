//
//  main.cpp
//  FallingApart
//
//  Created by Evelio Ornelas Jr. on 8/27/19.
//  Copyright © 2019 Evelio Ornelas Jr. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

using namespace std;

void start() {
    int n, a=0, b=0;
    cin >> n;
    vector<int> intList(n);
    for (auto& n : intList)
        cin >> n;
    sort(intList.rbegin(), intList.rend());
    for (int i=0; i<intList.size(); i++)
        if(i%2 == 0)
            a += intList[i];
        else
            b += intList[i];
    cout << a << " " << b << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
