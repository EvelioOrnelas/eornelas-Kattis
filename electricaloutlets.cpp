#include <iostream>

using namespace std;

void start() {
    int n, k, t, sum;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> k;
        for(int j=0; j<k; j++) {
            cin >> t;
            sum += t;
        }
        cout << sum-(k-1) << endl;
        sum = 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}