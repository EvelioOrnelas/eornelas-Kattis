#include <iostream>

using namespace std;

void start() {
    string n;
    cin >> n;
    for(int i=0; i<3; i++) {
        cout << n << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}