#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,v1num=0,v2num=0;
    bool same = false,first = true;
    vector<int> v1(1e5,0), v2(1e5,0), v1m, v2m;
    cin >> N;
    for(int i=0;i<N;i++){
        int v;
        cin >> v;
        v--;
        if(i%2==0){
            v1[v]++;
        }else{
            v2[v]++;
        }
    }

    v1m = v1;
    v2m = v2;

    sort(v1m.begin(),v1m.end());
    sort(v2m.begin(),v2m.end());

    for(int i=0;i<1e5;i++){
        if(v1[i]==v2[i] && v1[i]==v1m[1e5-1]){
            if(first){
                same = true;
                first = false;
            }else{
                same = false;
            }
        }
    }

    if(same){
        cout << N-max(v1m[1e5-1]+v2m[1e5-2],v2m[1e5-1]+v1m[1e5-2]) << endl;
    }else{
        cout << N-v1m[1e5-1]-v2m[1e5-1] << endl;
    }
}