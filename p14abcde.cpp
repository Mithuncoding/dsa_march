#include<bits/stdc++.h>
using namespace std;

void tri(int n){
    
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout << ch << " ";
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