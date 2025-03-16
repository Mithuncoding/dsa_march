#include<bits/stdc++.h>
using namespace std;

void tri(int n){
    
   for(int i=0;i<5;i++){
    for(int j=0;j<n-i;j++){
        cout << "* ";
    }
    for(int k=0;k<2*i;k++){
        cout << "  ";
    }
    for(int m=0;m<n-i;m++){
        cout << "* ";
    }
    cout << endl;
   }
}
void tri2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        for(int k=0;k<2*n-2*(i+1);k++){
            cout << "  ";
        }
        for(int m=0;m<=i;m++){
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