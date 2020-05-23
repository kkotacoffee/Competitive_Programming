#include <bits/stdc++.h>

using namespace std;

char alphas[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main(){
    int N,Q;
    cin >> N;
    string S;
    cin >> S;
    cin >> Q;

    vector<vector<int>> sum(N+1,vector<int>(26,0));
    vector<pair<char,char>> change;
    vector<int> changenum;

    for(int i=0;i<N;i++){
        sum[i+1] = sum[i];
        sum[i+1][S[i]-'a']++;
    }

    for(int i=0;i<Q;i++){
        int num;
        cin >> num;

        if(num==1){

            int iq;
            char c;
            cin >> iq >> c;
            changenum.push_back(iq);
            change.push_back({S[iq-1],c});
            S[iq-1] = c;

        }else{

            int ans = 0,l,q;
            vector<int> anssum(26,0);
            cin >> l >> q;

            for(int j=0;j<26;j++){
                anssum[j] = sum[q][j]-sum[l-1][j];
            }

            for(int j=0;j<change.size();j++){
                if(l<=changenum[j] && changenum[j]<=q){
                    anssum[change[j].first-'a']--;
                    anssum[change[j].second-'a']++;
                }
            }

            for(int j=0;j<26;j++){
                if(0<anssum[j]){
                    ans++;
                }
            }

            cout << ans << endl;
        }
    }
}