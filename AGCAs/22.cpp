#include <bits/stdc++.h>
 
using namespace std;

char alphas[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

 
int main(){
    string S;
    cin >> S;
    vector<int> num(26,0);
    if(S.size()!=26){
        for(int i=0;i<S.size();i++){
            for(int j=0;j<26;j++){
                if(S[i]==alphas[j]){
                    num[j]++;
                }
            }
        }

        for(int i=0;;i++){
            if(num[i]==0){
                cout << S+alphas[i] << endl;
                return 0;
            }
        }

    }else if(S=="zyxwvutsrqponmlkjihgfedcba"){
        cout << -1 << endl;
    }else{
        for(int i=0;i<25;i++){
            if(S[i]<S[i+1] && S[i]!=alphas[i]){
                for(int j=0;j<i-1;j++){
                    cout << S[j];
                }

                string SS = S.substr(i);
                sort(SS.begin(),SS.end());
                cout << SS[0] << endl;
                return 0;
            }
        }
    }
}