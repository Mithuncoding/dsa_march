#include<bits/stdc++.h>
using namespace std;

void tri(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){//stars
            cout << "* ";
        }
        for(int k=0;k<2*(n-i-1);k++){//space
            cout << "  ";
        }
        for(int m=0;m<=i;m++){//stars
            cout << "* ";
        }
        cout << endl;
    }
}
void tri2(int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){//stars
            cout << "* ";
        }
        for(int k=0;k<2*(i+1);k++){
            cout << "  ";
        }
        for(int m=0;m<n-i-1;m++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n ;

    tri(n);
    tri2(n);

}