#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,sum=0;
    cin >> N;
    vector<int> a(N+1),b(N+1,0);
    a[0] = 0;
    for(int i=1;i<=N;i++){
        cin >> a[i];
    }

    for(int i=N;1<=i;i--){
        int c=0,add=i;
        for(int j=i;j<=N;j += add){
            if(b[j]==1){
                c++;
            }
        }
        if(c%2==1 && a[i]==0){
            b[i]=1;
            sum++;
        }else if(c%2==0 && a[i]==1){
            b[i] = 1;
            sum++;
        }
    }

    cout << sum << endl;

    for(int i=1;i<=N;i++){
        if(b[i]==1){
            cout << i << " ";
        }
    }
}