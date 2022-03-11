#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int i = 0, j = s.length() - 1;
    bool check = true;
    while(i <= j) {
        if(s[i] != s[j]) {
            check = false;
            break;
        }
        i++;
        j--;
    }
    if(check) cout << "Yes";
    else cout << "No";
    return 0;
}