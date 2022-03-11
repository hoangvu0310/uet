#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int k = n - 1; k > 0; k--) {
        for(int i = 1; i <= k; i++) {
            if(a[i] < a[i - 1]) {
                int temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
        }
    }
    
    int minTime = 0;
    for(int i = 0; i < n - 1; i++) {
        minTime += a[i] * (n - i - 1);
    }
    cout << minTime;
    return 0;
}