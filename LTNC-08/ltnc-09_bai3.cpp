#include <bits/stdc++.h>
using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent){
    double tip = (tip_percent*meal_cost)/100;
    double tax = (tax_percent*meal_cost)/100;
    double res = meal_cost + tip + tax;
    cout << round(res);
}

int main(){
    double meal;
    int tip, tax;
    cin >> meal >> tip >> tax;
    //cin >> tip >> tax;
    solve(meal, tip, tax);
    return 0;
}
