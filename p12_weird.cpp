#include <bits/stdc++.h>
using namespace std;

void tri(int n) {
    for (int i = 1; i <= n; i++) {  
        //numbers
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        //spaces
        for(int k=1;k<=2*(n-i);k++){
            cout << "  ";
        }
        //numbers(rev)
        for(int m=i;m>=1;m--){
            cout << m << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    tri(n);
    return 0;
}
