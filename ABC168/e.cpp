#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long long int A(N),B(N);
    vector<pair<long long int,long long int >> ss,sf,ff,zero,x,y;
    map<long long int,pair<long long int,long long int>> mp;
    for(int i=0;i<N;i++){
        cin >> A[i] >> B[i];
        if(0<A[i] && 0<B[i]){

            mp[B[i]/A[i]] = {A[i],B[i]};

        }else if(A[i]*B[i]<0){

            mp[B[i]/A[i]] = {A[i],B[i]};

        }else if(A[i]<0 && B[i]<0){

            ff.push_back({i,B[i]/A[i]});

        }else if(A[i]==0 && B[i]==0){

            zero.push_back({i,B[i]/A[i]});

        }else if(A[i]==0){

            x.push_back({i,B[i]/A[i]}); // x=0

        }else{

            y.push_back({i,B[i]/A[i]}) //y=0

        }
    }

    for(int i=0;i<ss.size();i++){

    }

    for(int i=0;i<ff.size();i++){

    }


}