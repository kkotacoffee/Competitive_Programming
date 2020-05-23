#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int A,B,M,ans = 1000000000,x,y,z,amin=1000000000,bmin=1000000000;
    cin >> A >> B >> M;
    vector<long long int> a(A),b(B);


    for(int i=0;i<A;i++){
        cin >> a[i];
        amin = min(amin,a[i]);
    }

    for(int i=0;i<B;i++){
        cin >> b[i];
        bmin = min(bmin,b[i]);
    }

    for(int i=0;i<M;i++){
        cin >> x >> y >> z;
        ans=min(ans,a[x-1]+b[y-1]-z);
    }

    cout << min(ans,amin+bmin) << endl;
    
}