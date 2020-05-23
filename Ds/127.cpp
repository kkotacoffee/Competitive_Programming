#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,num=0,ans=0;
    cin >> N >> M;
    vector<long long int> A(N);
    vector<pair<long long int,long long int>> AA(M);
    long long int anum=N-1,aanum=M-1; 
    for(int i=0;i<N;i++){
        long long int a;
        cin >> a;
        A[i] = a;
    }

    for(int i=0;i<M;i++){
        long long int B,C;
        cin >> B >> C;
        AA[i].first = C;
        AA[i].second = B;
    }

    sort(A.begin(),A.end());
    sort(AA.begin(),AA.end());

    while(num!=N){
        if(AA[aanum].first<A[anum] && 0<=anum || aanum<0){
            ans += A[anum];
            anum--;
        }else{
            ans += AA[aanum].first;
            AA[aanum].second--;
            if(AA[aanum].second==0){
                aanum--;
            }
        }
        num++;
    }

    cout << ans << endl;
}