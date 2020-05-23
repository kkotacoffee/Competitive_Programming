#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,c=0;
    cin >> N;
    vector<int> p(N);
    for(int i=0;i<N;i++){
        cin >> p[i];
        if(p[i]!=i+1){
            c++;
        }
    }
    if(2<c){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}