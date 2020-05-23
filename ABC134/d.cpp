#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,count;
    cin >> N;
    vector<int> a(N+1,0);
    vector<int> ans;

    for(int i=1;i<=N;i++){
        cin >> a[i];
    }

for(int n=N;0<n;n/2){
    if(n==N){
        for(int i=n;(n/2)<i;i--){
        if(a[i]==1){
            ans.push_back(i);
            count++;
        }
    }
    }else{
        for(int i=n;(n/2)<n;n--){
            if(a[n*2]%2==0)
        }
    }

}


cout << count << endl;

for(int i=0;i<count-1;i++){
    cout << ans[i] <<" ";
}

cout << ans[count-1] << endl;
}