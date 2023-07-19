#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;
    int len1 = a.size(), len2 = b.size();
    char c0 = a[0], c1 = b[0];
    cout <<  len1 << " " << len2 << endl
         << a + b << endl;
    a[0] = c1;
    b[0] = c0;
    cout << a << " " << b;
    return 0;
}

