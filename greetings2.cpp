#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void start() {
    string input;
    cin >> input;
    int c = count(input.begin(), input.end(), 'e');
    string output = 'h' + string(2 * c, 'e') + 'y';
    cout << output << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}