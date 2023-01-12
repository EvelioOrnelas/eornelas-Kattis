#include <iostream>

using namespace std;

void start() {
    int a, b;
    cin >> a >> b;
    if(a > b) { 
        cout << b << " " << a;
    }
    else {cout << a << " " << b; }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}