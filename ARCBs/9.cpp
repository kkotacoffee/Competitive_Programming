#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    map<char,int> B;
    for(int i=0;i<10;i++){
        char b;
        cin >> b;
        B[b] = i;
    }

    cin >> N;

    vector<string> a(N),ans(N);

    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    for(int i=0;i<N;i++){
        int now = 0;
        for(int j=0;j<N;j++){
            if(i!=j){
                if(a[j].length()<a[i].length()){
                    now++;
                }else if(a[j].length()==a[i].length()){
                    for(int k=0;k<a[j].length();k++){
                        if(B[a[j][k]]<B[a[i][k]]){
                            now++;
                            break;
                        }else if(B[a[j][k]]>B[a[i][k]]){
                            break;
                        }

                        if(k==a[j].length()-1 && i<j){
                            now++;
                        }
                    }
                }
            }
        }
        ans[now] = a[i];
    }

    for(int i=0;i<N;i++){
        cout << ans[i] << endl;
    }
}