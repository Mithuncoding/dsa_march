#include<bits/stdc++.h>
using namespace std;

void tri(int n){
    
    for(int i=0;i<n;i++){
        int a=(i%2==0) ? 1:0;
        for(int j=0;j<=i;j++){
            cout << a << " ";
            a=1-a;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n ;

    tri(n);

}