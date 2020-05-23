#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,sec;
    cin >> n;
    vector<long long int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    for(int i=0;i<n;i++){
        if(a[n-1]/2 < a[i]){
            sec = i;
            break;
        }
    }

    if(abs(a[n-1]/2 - a[sec-1])<abs(a[n-1]/2 - a[sec])){
        sec--;
    }

    if(n-1 == sec){
        sec--;
    }

    cout << a[n-1] << " " << a[sec] << endl;
}