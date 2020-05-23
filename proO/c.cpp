#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,count=0;
    cin >> N;
    vector<int> A(N),aa;
    vector<int> B(N),bb;
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<N;i++){
        cin >> B[i];
    }

    for(int i=0;i<N;i++){
        if(B[i]<A[i]){
            count++;
        }
        aa.push_back(A[i]);
        bb.push_back(B[i]);
    }

    sort(aa.begin(),aa.end());
    sort(bb.begin(),bb.end());

    if(B[N]>=aa[aa.size()-1] && bb[0]>=A[2]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}