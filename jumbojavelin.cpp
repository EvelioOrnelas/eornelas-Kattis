#include <iostream>
#include <vector>

using namespace std;

void start() {
    int n, z, sum = 0;
    vector <int> numbers;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> z;
        numbers.push_back(z);
    }
    for(auto i : numbers) {
        sum += i;
    }
    int offset = n -1;
    cout << sum-offset << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}