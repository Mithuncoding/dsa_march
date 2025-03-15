#include<bits/stdc++.h>
using namespace std;

void sq(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    
    int n,t;
    cout << "Enter value of t" << endl;
    cin >> t;
    for(int i=0;i<t;i++){
        cout << "Enter the value of n" << endl;
        cin >> n;
        sq(n);
    }
    
}