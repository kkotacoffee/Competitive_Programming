#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,ans=0;
    cin >> N >> M;
    cout << pow(2,M)*((N-M)*100+1900*M) << endl;
}