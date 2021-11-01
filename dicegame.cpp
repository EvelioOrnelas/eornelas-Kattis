#include <iostream>

using namespace std;

void start() {
    int dice, dicewinner=0, sum=0, winner=0;
    for(int i=0; i<2; i++) {
        for(int j=0; j<4; j++) {
            cin >> dice;
            sum += dice;
        }
        if(sum > winner) {
            winner = sum;
            dicewinner = i;
        }
        else if(sum == winner) {
            dicewinner = 2;
        }
        sum=0;
    }
    if(dicewinner == 0) cout << "Gunnar" << endl;
    else if(dicewinner == 1) cout << "Emma" << endl;
    else if(dicewinner == 2) cout << "Tie" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}