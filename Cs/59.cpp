#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long int sum=0,ansp=0,ansm=0;
    cin >> n;
    vector<long long int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        if(i%2==0){
            sum += a[i];
            if(0<=sum){
                ansm += sum+1;
                sum =-1;
            }
        }else{
            sum += a[i];
            if(sum<=0){
                ansm += -sum+1;
                sum = 1;
            }
        }
    }

    sum=0;

    for(int i=0;i<n;i++){
        if(i%2==1){
            sum += a[i];
            if(0<=sum){
                ansp += sum+1;
                sum =-1;
            }
        }else{
            sum += a[i];
            if(sum<=0){
                ansp += -sum+1;
                sum = 1;
            }
        }
    }

    cout << min(ansp,ansm) << endl;
}