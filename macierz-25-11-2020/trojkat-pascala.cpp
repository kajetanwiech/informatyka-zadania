#include <iostream>

using namespace std;



int main () {
    
    cout<<"Wprowadź wielkość trojkąta: ";
    
    int n;
    cin>>n;
    
    int tab[n][n];
    
    for (int i = 0; i<n ; i++) {
        for (int j=0; j<n; j++) {
            if (j==0) {
                tab[i][j] = 1;
            }
            else if (j==i) {
                tab[i][j] = 1;
            }
            else tab[i][j] = tab[i-1][j] + tab[i-1][j-1];
        }
    }
    
    for (int i = 0; i<n ; i++) {
        for (int j=0; j<i+1; j++) {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}
