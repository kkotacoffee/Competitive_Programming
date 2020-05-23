#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,f,s,st=0;
    long long int ans =0,mm=0,sum=0;

    pair<int,int> p;
    cin >> N >> M;
    mm = M;
    for(int i=1;i<M;i++){
        M--;
        mm *= M; 
    }

    vector<int> fl(M,0);
    vector<pair<int,int>> arr(N);

    for(int i=0;i<N;i++){
        cin >> p.second >> p.first;
        arr[i] = p;
    }

    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());

    for(int i=0;i<M;i++){
        if(sum+arr[i].second<=mm){
            ans += arr[i].first;
            sum += arr[i].second;
        }

        }

    cout << ans << endl;

}