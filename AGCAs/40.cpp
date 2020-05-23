#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string S;
    cin >> S;
    bool up,first=true;
    long long int ans=0,count=1,last=0;
    if(S[0]=='<'){
        up = true;
    }else{
        up = false;
    }

    for(int i=1;i<S.size();i++){
        first=false;
        if(S[i]=='<' && up){
            count++;
        }else if(S[i]=='>' && !up){
            count++;
        }else{
            if(up){
                if(count!=1){
                    ans += count*(count+1)/2;
                }else{
                    ans++;
                }
                last = count;
                up = false;
            }else{
                if(count!=1){
                    ans += count*(count-1)/2;
                }

                if(last<count){
                    ans += count-last;
                }
                last = count;
                up=true;
            }
            count=1;
        }
    }

    if(up){
                if(count!=1){
                    ans += count*(count+1)/2;
                }else{
                    ans++;
                }
                last = count;
            }else{
                if(count!=1){
                    ans += count*(count-1)/2;
                }

                if(last<count){
                    ans += count-last;
                }
            }
            
        cout << ans << endl;
}