#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    map <string, int> m;
    for(int i=1; i<=n; i++){
        string s;
        cin >> s;
        int num;
        cin >> num;
        m.insert(make_pair(s, num));
    } 
    string name;
    while(cin >> name){
        if( m.find(name) != m.end() ){
            cout << name <<"="<< m[name] << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
    return 0;
}

