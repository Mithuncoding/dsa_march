#include<bits/stdc++.h>
using namespace std;

void tri(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n ;

    tri(n);

}
//p4 also same printing i instead of j