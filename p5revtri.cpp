#include<bits/stdc++.h>
using namespace std;

void tri(int n){
    for(int i=1;i<=n;i++){
        for(int j=5;j>=i;j--){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n ;

    tri(n);

}
//p6 same