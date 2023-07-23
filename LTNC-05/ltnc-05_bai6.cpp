#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    map<string, int> m;
    for(int i=0; i<q; i++){
        int t;
        cin >> t;
        if( t==1 ){
            string x;
            int y;
            cin >> x;
            cin >> y;
            m.insert(make_pair(x,y));
        }
        else if( t==2 ){
            string x;
            cin >> x;
            m.erase(x);
        }
        else{
            //thu xem neu khong khai bao iterator it thi ham find co chay dc ko?
            string x;
            cin >> x;
            if( m.find(x)!=m.end() ){
            	cout << m[x] << endl;
            }
            else{
            	cout << "0" << endl;
            }
        }
    }
    return 0;
}




