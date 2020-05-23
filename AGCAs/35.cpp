#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    cin >> N;
    vector<long long int> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    if(N==3 && a[0]==a[1]^a[2] && a[1]==a[0]^a[2] && a[2]==a[0]^a[1]){
        cout << "Yes" << endl;
    }else if(N%3==0 && a[0]==a[N/3 -1] && a[N/3]==a[N*2/3 -1] && a[N*2/3] == a[N-1] && a[0]==a[N/3]^a[N-1] && a[N/3]==a[0]^a[N-1] && a[N-1]==a[0]^a[N/3]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}