#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,ans=-1e9,aknum=0;
    cin >> N;
    vector<int> a(N);

    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    for(long long int i=0;i<N;i++){
        long long int akmax=-1e9,aknum=0,tknow=0;

        for(long long int j=0;j<N;j++){

            if(i==j){
                continue;
            }

            long long int aknow=0;

            for(long long int k=min(i,j);k<=max(i,j);k++){
                if((k-min(i,j))%2==1){
                    aknow += a[k];
                }
            }
            if(akmax<aknow){
                akmax = aknow;
                aknum = j; 
            }
        }

        for(int j=min(i,aknum);j<=max(i,aknum);j+=2){
            tknow += a[j];
        }

        ans = max(ans,tknow);
    }

    cout << ans << endl;
}