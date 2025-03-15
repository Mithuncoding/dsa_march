#include<bits/stdc++.h>
using namespace std;

void tri(int n){
    
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<=n-i-1;j++){
            cout << "  ";
        }
        //ABC increasing
        char a='A';
        for(int k=0;k<=i;k++){
            cout << a << " ";
            a++;
        }
        a-=2;
        for(int l=0;l<i;l++){
            cout << a << " ";
            a-=1;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n ;

    tri(n);

}