#include <bits/stdc++.h>
 
using namespace std;

char alphas[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int N;

void dfs(string S,int n){
    if(S.size()==N){
        cout << S << endl;
    }else{
        for(int i=0;i<S.size()+1;i++){
            if(i<=n){
                dfs(S+alphas[i],i+1);
            }
        }
    }
}
 
int main(){
    cin >> N;
    dfs("a",1);
}
