#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int words = 0;

    for (int i = 0; i < s.length(); i++) {
        if ((i == 0 && s[i] != ' ') ||
            (i > 0 && s[i] != ' ' && s[i - 1] == ' ')) {
            words++;
        }
    }

    cout << words;
}
