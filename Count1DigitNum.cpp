#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(n > 0) {
        cin >> m;
        count[m]++;
        n--;
    }
    
    for(int i = 0; i < 10; i++) {
        cout << i << " : " << count[i] << endl;
    }
    return 0;
}