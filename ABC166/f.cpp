#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,A,B,C;
    cin >> N >> A >> B >> C;
    string last,ans="";
    for(int i=0;i<N;i++){
        string S;
        cin >> S;
        if(i==0){
            if(S=="AB"){
                if(A<=B){
                    ans += 'A';
                    A++;
                    B--;
                }else{
                    ans += 'B';
                    B++;
                    A--;
                }
            }else if(S=="AC"){
                if(A<=C){
                    ans += 'A';
                    A++;
                    C--;
                }else{
                    ans += 'C';
                    C++;
                    A--;
                }
            }else{
                if(B<=C){
                    ans += 'B';
                    B++;
                    C--;
                }else{
                    ans += 'C';
                    C++;
                    B--;
                }
            }
        }else{
            if(S=="AB"){
               
                    if(A<=B){
                        A++;
                        B--;
                        ans += 'A';
                    }else{
                        B++;
                        A--;
                        ans += 'B';
                    }
            }else if(S=="AC"){
            
                    if(A<=C){
                        A++;
                        C--;
                        ans += 'A';
                    }else{
                        C++;
                        A--;
                        ans += 'C';
                    }
                
            }else{
                
                    if(C<=B){
                        C++;
                        B--;
                        ans += 'C';
                    }else{
                        B++;
                        C--;
                        ans += 'B';
                    }
            }
        }

        if(A<0 || B<0 || C<0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    for(int i=0;i<N;i++){
        cout << ans[i] << endl;
    }
}