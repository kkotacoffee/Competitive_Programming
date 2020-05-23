#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,now,add=1;
    cin >> N;
    vector<int> sum,color(N);
    cin >> color[0];
    for(int i=1;i<N;i++){
        cin >> color[i];
        if(color[i]==color[i-1]){
            add++;
        }else{
            sum.push_back(add);
            add = 1;
        }
    }

    if(sum.size()==0){
        cout << -1 << endl;
        return 0;
    }else{
        if(color[0]==color.back()){
            sum.push_back(add+sum[0]);
        }else{
            sum.push_back(add);
        }
    }

    sort(sum.begin(),sum.end());

    cout << (sum.back()+1)/2 << endl;
}