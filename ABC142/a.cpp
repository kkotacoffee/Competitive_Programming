#include <bits/stdc++.h>

using namespace std;

int main(){
    float N;
    float ans;
    cin >> N;
    int n = (int)N;
    if(n%2 == 0){
        ans = 0.5000000000;
    }else{
        ans = (n/2 + 1) / N;
    }

    cout << setprecision(7) << ans;
}