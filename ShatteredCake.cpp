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
    int W, N, w, l, x, sum;
    cin >> W;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> w >> l;
        x = w * l;
        sum += x;
    }
    W = sum / W;
    cout << W << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// Shattered Cake

