#include <iostream>

using namespace std;

void start() {
    string n;
    cin >> n;
    swap(n.at(0), n.at(1));
    cout << n << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}