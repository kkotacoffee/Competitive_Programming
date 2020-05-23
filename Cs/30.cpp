#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    long long int X,Y,time=0,now=0,ans=0;
    bool a = true;
    cin >> N >> M;
    cin >> X >> Y;

    vector<pair<long long int, bool>> ab(N+M);

    for(int i=0;i<N;i++){
        cin >> ab[i].first;
        ab[i].second = true;
    }

    for(int i=0;i<M;i++){
        cin >> ab[i+N].first;
        ab[i+N].second = false;
    }

    sort(ab.begin(),ab.end());

    while(now!=N+M){
        if(a){
            while(now!=N+M){
                if(time<=ab[now].first && ab[now].second){
                    time = ab[now].first+X;
                    a=false;
                    now++;
                    break;
                }
                now++;
            }
        }else{
            while(now!=N+M){
                if(time<=ab[now].first && !ab[now].second){
                    time = ab[now].first+Y;
                    ans++;
                    a = true;
                    now++;
                    break;
                }
                now++;
            }
        }
    }

    cout << ans << endl;
}