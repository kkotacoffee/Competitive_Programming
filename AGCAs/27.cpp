#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,x,sum=0;
    cin >> N >> x;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    for(int i=0;i<N;i++){
        sum += a[i];
        
        if(x<sum){
            cout << i << endl;
            break;
        }else if(x==sum){
            cout << i+1 << endl;
            break;
        }
        if(i==N-1){
            cout << i << endl;
        }
    }
}