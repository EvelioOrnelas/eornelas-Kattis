#include <iostream>
#include <string>

using namespace std;

void start() {
    string word;
    cin >> word;
    int count=0;
    for (auto i : word) {
        if(i == 'a') {
            break;
        }
        else {
            count++;
        }
    }
    word.erase(0, count);
    cout << word;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}