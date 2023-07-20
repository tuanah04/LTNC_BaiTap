#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int> > a;
    for(int i=0; i<n; i++){
        int first_num;
        cin >> first_num;
        vector<int> temp;
        for(int j=0; j<first_num; j++){
            int t;
            cin >> t;
            temp.push_back(t);
        }
        a.push_back(temp);
    }
    while(q--){
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}

