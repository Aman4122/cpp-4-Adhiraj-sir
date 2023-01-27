#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum(int x ,int y){
    return x + y;
}

int main(){

    int n1, n2;
    cin >> n1 >> n2;
    cout << "The sum of " << n1 << " and " << n2 << " is " << sum(n1, n2);
    return 0;
}
