#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,ans=0,v11,v22,v1m=1,v2m=1;
    cin >> n;
    vector<int> v1(n/2),v2(n/2);
    vector<pair<int,int>>v111,v222;

    for(int i=0;i<n;i++){
        if(i%2==0){
            cin >> v1[i/2];
        }else{
            cin >> v2[i/2];
        }
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int i=0;

    while(i!=n/2){
        int num = upper_bound(v1,v1+n/2,v1[i])-lower_bound(v1,v1+n/2,v1[i]);
        v111.push_back(num,);
        i += num;
    }

    while(i!=n/2){
        int num = upper_bound(v2,v2+n/2,v2[i])-lower_bound(v2,v2+n/2,v2[i]);
        v222.push_back(num);
        i += num;
    }
}