#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long long int K;
    long long int ans=0,anss=0,ansss=0,kk=0;
    cin >> N >> K;

    for(int i=1;i<K;i++){
            kk += i;
        }

        kk = kk%1000000007;

    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<N;i++){
        int a=A[i];
        anss=0;
        ansss=0;
        for(int j=0;j<N;j++){
            if(A[j]<a){
                if(i<j){
                    ansss++;
                    anss++;
                }else{
                    anss++;
                }
            }
        }
        ans += anss*kk;
        ans =  ans%1000000007;
        ans += ansss*K;
        ans = ans%1000000007;
    }

    ans =  ans%1000000007;

    cout << ans << endl;
}