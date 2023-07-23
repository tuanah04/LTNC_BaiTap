#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    set<int> s;
    for(int i=0; i<q; i++){
        int y, x;
        cin >> y >> x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            if( s.find(x)!=s.end() ){
                s.erase(x);
            }  
        }
        else{
            if( s.find(x)!=s.end() ){
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
    }
    return 0;
}




