#include <iostream>
#include <vector>

using namespace std;

void start() {
    vector<string> index;
    int n;
    string words;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> words;
        index.push_back(words);
    }
    for(int i=0; i<index.size(); i++) {
        cout << index.at(i) << endl;
        i++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}