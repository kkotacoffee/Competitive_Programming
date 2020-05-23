#include <bits/stdc++.h>
 
using namespace std;

char alphas[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int N,x=0;

vector<string> a;

void dfs(string S,int n){
    if(S.size()==N){
        a.push_back(S);
    }else{
        for(int i=0;i<=n;i++){
            dfs(S+alphas[i],max(n,i+1));
        }
    }
}

int main(){
    cin >> N;
    dfs("a",1);
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout << a[i] << endl;
    }
}