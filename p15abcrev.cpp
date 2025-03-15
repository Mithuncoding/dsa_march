#include<bits/stdc++.h>
using namespace std;

void tri(int n){
    
    for(int i=0;i<n;i++){
        for(char ch='A';ch<= 'A'+(n-i-1);ch++){
            cout << char(65+i) << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n ;

    tri(n);

}
//pattern 15 is just reverse
//pattern 16 is printing row wise