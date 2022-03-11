#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int pascal[n + 1][n + 1];
    for(int i = 0; i <= n; i++) {    
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }
        }
    }
    
    for(int i = 0; i <= n; i++) {   
        for(int j = 0; j <= i; j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}