#include <iostream>
#include <cstring>

using namespace std;

void start() {
    int i = 0;
    string s = "";
    char c;
    getline(cin, s);
    while (s[i]) {
      c=s[i];
    if (isupper(c))
        cout << c++;
        i++;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    start();
    return 0;
}
// Autori

