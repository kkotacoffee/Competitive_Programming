#include <bits/stdc++.h>

using namespace std;

long long int dp(xx,yy,zz,sam,kosuu){
    if(kosuu==M) return sam;
    sam = abs(xx+)
    
}

int main(){

int N,M,ans=0;

cin >> N >> M;
vector<int> sum(N);

for(int i=0;i<N;i++){
    long long int x,y,z;
    cin >> x >> y >> z;
    sum[i] = x + y + z;
}

sort(sum.begin(),sum.end());

for(int i=0;i<M;i++){
    if(sum[N-1-i]<=0){
        break;
    }else{
        ans += sum[N-1-i];
    }
}

cout << ans;
}