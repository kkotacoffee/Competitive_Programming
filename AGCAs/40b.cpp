#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long int N,mx,st,en;
    cin >> N;
    long long int p;
    vector<pair<long long int,long long int>> LR(N);
    vector<long long int> mxnum(1,0);

    cin >> LR[0].first >> LR[0].second;
    mx=LR[0].second-LR[0].first+1;

    for(int i=1;i<N;i++){
        cin >> LR[i].first >> LR[i].second;
    }

    sort(LR.begin(),LR.end());

    for(int i=1;i<N;i++){
        if(LR[i].second-LR[i].first+1>mx){
            mx=LR[i].second-LR[i].first+1;
            mxnum.push_back(i);
        }
    }

    int j=N-1;

    while(1){
        if(mxnum[mxnum.size()-1] != j){
            st=j;
            break;
        }else{
            j--;
        }
    }

    for(int i=0;i<N;i++){
        p =LR[i].first;
        LR[i].first = LR[i].second;
        LR[i].second = p;
    }

    sort(LR.begin(),LR.end());

    j=0;

    while(1){
        if(mxnum[mxnum.size()-1] != j){
            en=j;
            break;
        }else{
            j++;
        }
    }

    cout << mx+LR[en].second-LR[st].first+1 << endl;
}