#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    int K,count=1,si;
    cin >> S >> K;
    vector<string> vec;
    si = S.size();
    for(int i=0;i<S.size();i++){
        string s = "";
        for(int j=0;j<min(5,si-i);j++){
            s += S[i+j];
            vec.push_back(s);
        }
    }

    sort(vec.begin(),vec.end());

    for(int i=0;;i++){
        if(K==count){
            cout << vec[i] << endl;;
            break;
        }
        if(vec[i]!=vec[i+1]){
            count++;
        }
    }
}