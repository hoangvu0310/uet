#include <iostream>

using namespace std;

bool soDoiGuong(int n) {
    int num[1000], size = 0;
    if(n < 10) return true;
    while(n > 0) {
        num[size++] = n % 10;
        n /= 10;
    }
    int i = 0, j = size - 1;
    while(i <= j) {
        if(num[i] != num[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    int n, a, b;
    cin >> n;
    while(n > 0) {
        cin >> a >> b;
        int count = 0;
        for(a; a <= b; a++) {
            if(soDoiGuong(a)) count++; 
        }
        cout << count << endl;
        n--;
    }
    return 0;
}