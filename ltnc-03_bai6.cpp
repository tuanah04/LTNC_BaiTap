#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    string s;
    cin >> s;
    int k;
    cin >> k;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    if( k>26 ){
        k=k%26;
    }
    for(int i=0; i<size; i++){
        if( s[i]>='a' && s[i]<='z' ){
            int index=alpha.find(s[i]);
            if( index+k<26 ){
                s[i]=alpha[index+k];
            }
            else{
                s[i]=alpha[index+k-26];
            }
        }
        else if( s[i]>='A' && s[i]<='Z' ){
            s[i]=tolower(s[i]);
            int index=alpha.find(s[i]);
            if( index+k<26 ){
                s[i]=alpha[index+k];
            }
            else{
                s[i]=alpha[index+k-26];
            }
            s[i]=toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}
