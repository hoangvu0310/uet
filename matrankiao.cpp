#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            num[i][j] = 0;
        }
    }
    
    int k = 1, i = 0, j = n / 2;
    num[i][j] = k++;
    while(k <= n * n) {
        int p = (i + n - 1) % n;
        int q = (j + 1) % n;
        if(num[p][q] == 0) {
            num[p][q] = k++;
            i = p;
            j = q;
        } else {
            i = (i + 1) % n;
            num[i][j] = k++;
        }
    }
    
    for(int x = 0; x < n; x++) {
        for(int y = 0; y < n; y++) {
            cout << num[x][y] << " ";
        }
        cout << endl;
    }
    return 0;
}