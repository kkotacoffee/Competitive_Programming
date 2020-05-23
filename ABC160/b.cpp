#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int X;
    cin >> X;
    cout << 1000*(X/500) + 5*((X-500*(X/500))/5) << endl;
}