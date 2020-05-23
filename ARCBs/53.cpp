#include <bits/stdc++.h>

using namespace std;

char alphas[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main(){
    string S;
    cin >> S;
    vector<int> sum(26,0);
    int odd=0,ans=0,even=0;
    for(int i=0;i<S.size();i++){
        for(int j=0;j<26;j++){
            if(S[i]==alphas[j]){
                sum[j]++;
                ans++;
            }
        }
    }

    for(int i=0;i<26;i++){
        if(sum[i]%2==1){
            odd++;
            even += sum[i]-1;
        }else{
            even += sum[i];
        }
    }

    if(odd<2){
        cout << S.size() << endl;
    }else{
        cout << 1+ 2*((even/2)/odd) << endl;
    }
}