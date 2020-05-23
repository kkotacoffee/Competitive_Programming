#include <bits/stdc++.h>
 
using namespace std;

char alphas[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

 
int main(){
    string s;
    cin >> s;
    int ans = 1000;
    int siz = s.size();
    for(int i=0;i<27;i++){
        int now = 0;
        int ansnow = 0;
        for(int j=0;j<s.size();j++){
            if(s[j]==alphas[i]){
                if(now!=0){
                    if(s[j]==s[j-1]){
                        now++;
                    }else{
                        ansnow = max(ansnow,j-now);
                        now = j+1;
                    }
                }else{
                    ansnow = max(ansnow,j-now);
                    now = j+1;
                }
            }
        }
        ansnow = max(ansnow,siz-now);
        ans = min(ans,ansnow);
    }

    cout << ans << endl;
}