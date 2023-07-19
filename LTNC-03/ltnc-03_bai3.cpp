#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s){
    if(s[8]=='A'){
        if( s[0]=='1' && s[1]=='2' ){
            s[0]=='0';
            s[1]=='0';
        }
        s.erase(8, 2);
        return s;
    }
    if(s[0]=='1' && s[1]=='2'){
        //s.erase(8, 2);
    }
    // else if( s[0]=='0' && s[1]=='8' ){
    //     s[0]='2';
    //     s[1]='0';
    // }
    else if( int(s[1]) >= 8 ){
        s[1]=char(int(s[1])+2-10);
        s[0]='2';
    }
    else{
        s[0]='1';
        s[1]= char(int(s[1]) + 2);
    }
    s.erase(8, 2);
    return s;
} 

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

