#include<bits/stdc++.h>
using namespace std;

void tri(int n){
    
    /* char ch = 'A'+(n-1);// E
    for(int i=0;i<n;i++){

        char last=ch-i;// E D
        for(int j=0;j<=i;j++){
            cout <<  last++<< " ";
        }
        cout << endl;
    } */
   for(int i=0;i<n;i++){
        for(char ch='A'+(n-1)-i;ch>='A';ch--){
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