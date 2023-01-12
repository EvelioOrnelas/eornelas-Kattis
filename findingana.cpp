#include <iostream>
#include <string>

using namespace std;

void start() {
    string word;
    cin >> word;
    int count=0;
    for (auto i : word) {
        if(i == 'a') {
            count++;
            word.erase(word.begin() + 0, word.end() - count);
            break;
        }
        cout << word;
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}