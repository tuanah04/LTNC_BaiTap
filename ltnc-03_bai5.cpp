#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        string s;
        cin >> s;
        string h="hackerrank";
        int cnt=0;
        for(int j=0; j<s.size() && cnt<h.size(); j++){
            if(s[j] == h[cnt]){
                cnt++;
            }
        }
        if(cnt == h.size()){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}

