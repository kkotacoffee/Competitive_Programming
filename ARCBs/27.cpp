#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long long int ans = 1;
    cin >> N;
    string s1,s2;
    cin >> s1;
    cin >> s2;

    if(N<3){
        cout << 0 << endl;
        return 0;
    }

    map<char,int> mp;
    map<char,char> MP;

    for(int i=0;i<N;i++){
        if(s1[i]!=s2[i]){
            if(0<=s1[i]-'0' && s1[i]-'0'<10){
                mp[s2[i]] = -1;
            }else if(0<=s2[i]-'0' && s2[i]-'0'<10){
                mp[s1[i]] = -1;
            }else{
                MP[s1[i]] = s2[i];
                MP[s2[i]] = s1[i];
            }
        }
    }

    for(int i=0;i<N;i++){
        cout << mp[s2[i]] << endl;
        if(0==mp.at(s1[i]) && mp.at(s2[i])==0 && 0==mp[MP[s1[i]]] && 0==mp[MP[s2[i]]] && (s1[i]-'0'<0 || 9<s1[i]-'0') && (s1[i]-'0'<0 || 9<s2[i]-'0')){
            cout << mp[s2[i]] << endl;
            if(i==0){
                ans *= 9;
            }else{
                if(MP[s1[i]]!='a' && MP[s2[i]]!='a'){
                    ans *= 10;
                }
                cout << mp[s2[i]] << endl;
            }
            mp[s1[i]] = -1;
            mp[s2[i]] = -1;

            cout << ans << endl;
        }
    }

    cout << ans << endl;
}
