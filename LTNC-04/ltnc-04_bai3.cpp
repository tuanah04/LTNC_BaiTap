#include <bits/stdc++.h>
using namespace std;

bool isPalin(string s){
    int n = s.size();
    for(int i=0; i<n/2; i++){
        if( s[i] != s[n-1-i] ){
            return false;
        }
    }
    return true;
}

int palinIndex(string s){
    int n = s.size();
    for(int i=0; i<n/2; i++){
        if( s[i] != s[n-1-i] ){
            s.erase(i, 1);
            if(isPalin(s)){
                return i;
            }
            else return n-1-i;
        }
    }
    return -1;
}
int main(){
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        string s;
        cin >> s;
        cout << palinIndex(s) << endl;
    }
    return 0;
}
