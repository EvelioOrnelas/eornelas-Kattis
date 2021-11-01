#include <iostream>

using namespace std;

void start() {
    int grades, winner=0, sum=0, sumwinner=0;
    for(int i=1; i<6; i++) {
        for(int j=0; j<4; j++) {
            cin >> grades;
            sum += grades; 
        }
        if(sum > sumwinner) {
            sumwinner = sum;
            winner = i;
        }
        sum=0;
    }
    cout << winner << " " << sumwinner << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}