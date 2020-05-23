#include <bits/stdc++.h>

using namespace std;

string s,t;

void lcs(int a, int b,string str){
    if(s[a]==t[b]){
        str += s[a];
        lcs[a+1][b+1];
    }else{
        lcs[]
    }
}

int main(){
    string fin,line;
    getline(cin,line);
    istringstream stream(line);
    stream >> s;
    stream >> t;

    for(int i=0;i<s.length();i++){
        for(int j=0;j<t.length();j++){
            if(s[i]==t[j]){
                fin += s[i];
                break;
            }
        }
    }

    cout << fin <<  endl;

}