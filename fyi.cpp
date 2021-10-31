#include <iostream>

using namespace std;

void start() {
    string n;
    cin >> n;
    if(n.at(0) == '5' && n.at(1) == '5' && n.at(2) == '5') cout << 1 << endl;
    else cout << 0 << endl;
}


int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
