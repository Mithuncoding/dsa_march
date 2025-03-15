#include<bits/stdc++.h>
using namespace std;

void tri1(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout << "  ";
        }
        //stars
        for(int k=0;k<2*i+1;k++){
            cout << "* ";
        }
        //space
        for(int m=0;m<n-i-1;m++){
            cout << "  ";
        }
        cout << endl;
    }
}
void tri2(int n){
    int t=n;
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<=i;j++){
            cout << "  ";
        }
        //stars
        for(int k=0;k<2*(n-i)-3;k++){
            cout << "* ";
        }
        //space
        for(int m=0;m<i;m++){
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