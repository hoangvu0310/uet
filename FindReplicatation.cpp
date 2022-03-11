#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    bool seen[n + 1];
    for(int i = 1 ; i <= n; i++) {
        cin >> a[i];
        seen[i] = false;
    }
    
    bool check = false;
    for(int i = 1; i <= n; i++) {
        if(seen[a[i]]) {
            check = true;
            break;
        } else {
            seen[a[i]] = true;
        }
    }
    if(check) cout << "Yes";
    else cout << "No";
    return 0;
}