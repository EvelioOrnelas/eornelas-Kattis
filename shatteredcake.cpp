#include <iostream>
#include <string>

using namespace std;

void start() {
    int W, N, w, l, sum=0;
    cin >> W;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> w >> l;
        sum += w*l;
    }
    cout << sum / W << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// Shattered Cake
