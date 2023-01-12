#include <iostream>

using namespace std;

void start() {
    int a, b;
    cin >> a >> b;
    if(a > b) {
        cout << 1;
    }
    else {
        cout << 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}