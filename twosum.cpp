#include <iostream>

using namespace std;

void start() {
    int num1, num2, sum;
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << sum;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}