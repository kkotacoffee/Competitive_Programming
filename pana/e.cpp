#include <bits/stdc++.h>
 
using namespace std;

char alphas[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int N,x=0;

int main(){
    vector<string> vec(3),s(6,"");
    string a,b,c;
    int x[6],ans[6],aaaa=0;
    bool out = false;
    cin >> vec[0] >> vec[1] >> vec[2];

do{
    for(int i=0;i<vec[0].size();i++){
        for(int j=0;j<vec[1].size();j++){
            if(vec[0][i]!='?' && vec[1][i]!='?' && vec[0][i]!=vec[1][j]){
                break;
            }

            if(j=vec[1].size()-1){
                x[aaaa] = i;
                out = true;
                break;
            }
        }

        if(out){
            break;
        }
    }

    if(!out){
        s[aaaa] = vec[0]+vec[1];
    }else{
        for(int i=0;i<vec[0].size()+x[aaaa];i++){
            if(vec[0][i]=='?' && vec[1][i]=='?'){
                s1 += '?'; 
            }else{
                s1 += vec[0][i];
            }
        }
    }

    out = false;

    for(int i=0;i<s[aaaa].size();i++){
        for(int j=0;j<vec[2].size();j++){
            if(s[aaaa][i]!='?' && vec[2][i]!='?' && s[aaaa][i]!=vec[2][j]){
                break;
            }

            if(j=vec[2].size()-1){
                ans[aaaa] = s[aaaa].size();
                ans[aaaa] += i;
                out = true;
                break;
            }
        }

        if(out){
            break;
        }
    }

    if(!out){
        ans[aaaa] = c.size();
        ans[aaaa] += s1.size();
    }

    out = false;

}while(next_permutation(vec.begin(),vec.end()));
    

    cout << min({ans[0],ans[1],ans[2],ans[3],ans[4],ans[5]}) << endl;
}