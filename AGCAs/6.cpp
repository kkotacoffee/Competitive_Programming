#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0,maxcom=0;
    string s,t;
    cin >> N;
    cin >> s >> t;

    for(int i=0;i<N;i++){
        int j=0;
        if(t[0]==s[N-1-i]){
            while(t[j]==s[N-1-i+j] && j!=i+1){
                    j++;
            }
            if(j==i+1){
                maxcom = i+1;
            }
        }
    }

    cout << 2*N - maxcom << endl;
}