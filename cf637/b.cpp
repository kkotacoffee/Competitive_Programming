#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long int k,n,now=0,ansf=1,anss=1;
        cin >> n >> k;
        vector<long long int> a(n),sum(n);

        for(int j=0;j<n;j++){
            cin >> a[j];
        }

        for(int j=0;j<n;j++){

            if(j==0){
                sum[j] = 0;
            }else if(j==n-1){
                sum[j] = sum[j-1];
            }else if(a[j-1]<a[j] && a[j+1]<a[j]){
                sum[j] = sum[j-1] + 1;
            }else{
                sum[j] = sum[j-1];
            }
            //cout << sum[j];
        }

        for(int j=0;j<=n-k;j++){

            if(j==0){

                if(sum[j+k-2]!=sum[j+k-1]){
                    now = sum[j+k-1]-1;
                }else{
                    now = sum[j+k-1];
                }

            }else if(j==n-k){
                if(sum[j]!=sum[j-1]){
                    now = sum[j+k-1]-sum[j-1]-1;
                }else{
                    now = sum[j+k-1]-sum[j-1];
                }

            }else if(sum[j]!=sum[j-1] && sum[j+k-1]!=sum[j+k-2]){
                now = sum[j+k-1]-sum[j-1]-2;
            }else if(sum[j]!=sum[j-1] || sum[j+k-1]!=sum[j+k-2]){
                now = sum[j+k-1]-sum[j-1]-1;
            }else{
                now = sum[j+k-1]-sum[j-1];
            }

            //cout << now;

            if(ansf<now+1){
                ansf = now+1;
                anss = j+1;
            }
        }

        cout << ansf << " " << anss << endl;


    }
}