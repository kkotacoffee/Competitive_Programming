#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,num,now=0;
    cin >> N;
    vector<pair<long long int,int>> len(N-1);
    vector<long long int> ans(N-1);
    for(int i=2;i<=N;i++){
        cout << "? " << 1 << " " << i << endl;
        cin >> len[i-2].first;
        len[i-2].second = i; 
    }

    sort(len.begin(),len.end());

    num = len.back().second;

    for(int i=1;i<=N;i++){
        if(i!=num){
            cout << "? " << num << " " << i << endl;
            cin >> ans[now];
            now++;
        }
    }

    sort(ans.begin(),ans.end());

    cout << "! " << ans.back() << endl;
}