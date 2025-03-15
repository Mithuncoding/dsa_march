#include<bits/stdc++.h>
using namespace std;

void tri1(int n){
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        for(int k=0;k<=n-i-1;k++){
            cout << "  ";
        }
        cout << endl;
    }
}
void tri2(int n){
    for(int i=0;i<n-1;i++){
        //stars
        for(int j=0;j<n-i-1;j++){
            cout << "* ";
        }
        //space
        for(int k=0;k<=i;k++){
            cout << "  ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n ;

    tri1(n);
    tri2(n);

}