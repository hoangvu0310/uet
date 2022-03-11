#include <iostream>
#include <iomanip>

using namespace std;

void swap(double &x, double &y) {
    double temp = x;
    x = y;
    y = temp;
}

void sortAndPrint(double diem[][5], int x, int n) {
    if(x != 1) cout << "SV Toan Ly Anh" << endl;
    else cout << "SV TB Toan Ly Anh" << endl; 
    for(int k = n - 1; k > 0; k--) {
        for(int i = 1; i < n; i++) {
            if(diem[i][x] > diem[i - 1][x]) {
                for(int j = 0; j < 5; j++) {
                    swap(diem[i][j], diem[i - 1][j]);
                }
            }
        }    
    }
    
    int j;
    for(int i = 0; i < n; i++) {
        cout << fixed << setprecision(0) << diem[i][0] << " ";
        if(x == 1) j = 1;
        else j = 2;
        for(j; j < 5; j++) {
            cout << fixed << setprecision(1) << diem[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    double diem[n][5]; 
    bool check = true;
    for(int i = 0; i < n; i++) {
        diem[i][0] = i + 1;
    }
    for(int i = 0; i < n; i++) {
        double avg = 0;
        for(int j = 2; j < 5; j++) {
            cin >> diem[i][j];
            if(diem[i][j] > 10 || diem[i][j] < 0) {
                check = false;
                break;
            } else {
                avg += diem[i][j];
            }
        }
        diem[i][1] = avg / 3;
    }
    
    if(!check) {
        cout << "invalid";
    } else {
        cout << "Theo diem mon Toan:" << endl;
        sortAndPrint(diem, 2, n);
        
        cout << "Theo diem mon Anh:" << endl;
        sortAndPrint(diem, 4, n);
        
        cout << "Theo diem trung binh:" << endl;
        sortAndPrint(diem, 1, n);
    }
    return 0;
}