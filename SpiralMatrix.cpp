#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[m][n];
    int k = 1, row = m, col = n, i, j, p = 0;
    while(k <= m * n){
		for(j = p; j < col; j++)
			a[p][j] = k++;
		for(i = p+1; i < row; i++) 
			a[i][col-1] = k++;
		if(p != row - 1){
			for(j = col - 2; j >= p; j--) 
				a[row - 1][j] = k++;
		}	
		if(p!= col - 1){
			for(i = row - 2; i > p; i--) 
				a[i][p] = k++;
		}	
        p++;
        row--;
        col--;
    }
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}