#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int X,Y,A,B,C,ans=0;
    cin >> X >> Y >> A >> B >> C;
    long long int na=A-1,nb=B-1,nc=C-1,sum=X+Y;
    pair <long long int,int> P;
    vector<pair<long long int,int>> pqr;

    P.second = 1;

    for(int i=0;i<A;i++){
        cin >> P.first;
        pqr.push_back(P);
    }

    P.second = 2;

    for(int i=0;i<B;i++){
        cin >> P.first;
        pqr.push_back(P);
    }

    P.second = 3;

    for(int i=0;i<C;i++){
        cin >> P.first;
        pqr.push_back(P);
    }

    sort(pqr.begin(),pqr.end());

    for(int i=A+B+C-1;;i--){

        if(sum==0){
            break;
        }

        if(0<X && pqr[i].second==1){
            ans +=pqr[i].first;
            X--;
            sum--;
        }else if(0<Y && pqr[i].second==2){
            ans += pqr[i].first;
            Y--;
            sum--;
        }else if(pqr[i].second==3 && 0<sum){
            ans += pqr[i].first;
            sum--;
        }
    }

    cout << ans << endl;
}