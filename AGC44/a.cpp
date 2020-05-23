#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int T;
    cin >> T;

    for(int i=0;i<T;i++){
        long long int N,A,B,C,D;
        long long int ans = 1e18,now=1,anss=0,loopnum=1,two=1;

        cin >> N >> A >> B >> C >> D;

        map<long long int,long long int> mp;
        queue<long long int> Q;

        Q.push(1);
        mp[1] = D;

        while(!Q.empty()){
            long long int enq = Q.front();
            cout << enq << endl;
            Q.pop();

            if(enq*2<N+100){
                mp[enq*2] = mp[enq] + A;
                Q.push(enq*2);
            }

            if(enq*3<N+100){
                mp[enq*3] = mp[enq] + B;
                Q.push(enq*3);
            }

            if(enq*5<N+100){
                mp[enq*5] = mp[enq] + C;
                Q.push(enq*5);
            }
        }

        
        for(long long int j = N-100; j<N+100; j++){
            if(mp[j]!=0){
                ans = min(ans, mp[j] + abs(j-N)*D);
            }
        }

        cout << ans << endl;
    }
}