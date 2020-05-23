#include <bits/stdc++.h>

using namespace std;

int main(){
    double N,A,B,sum=0;
    double P,Q;
    cin >> N >> A >> B;
    vector<double> S(N);
    for(int i=0;i<N;i++){
        cin >> S[i];
        sum += S[i];
    }

    sort(S.begin(),S.end());

    if(S[N-1]==S[0]){
        cout << -1 << endl;
    }else{
        P = B/(S[N-1]-S[0]);

        Q = A-(sum*P)/N;

        cout << setprecision(15) << P << " " <<setprecision(15) << Q << endl;
    }
}