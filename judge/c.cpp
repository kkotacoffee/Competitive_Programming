#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a,b,c,sum,ans=0;
    cin >> a >> b >> c;
    sum = a+b+c;

    vector<int> vec(sum),A(a),B(b),C(c);

    for(int i=0;i<sum;i++){
        vec[i] = i;
    }

    do{

        bool ok = true;
        int now = 0;

        for(int i=0;i<a;i++){
            A[i] = vec[now];
            now++;
        }

        
        for(int i=0;i<b;i++){
            B[i] = vec[now];
            now++;
        }

        
        for(int i=0;i<c;i++){
            C[i] = vec[now];
            now++;
        }

        for(int i=1;i<a;i++){
            if(A[i]<A[i-1]){
                ok = false;
            }
        }

        for(int i=1;i<b;i++){
            if(B[i]<B[i-1]){
                ok = false;
            }
        }

        for(int i=1;i<c;i++){
            if(C[i]<C[i-1]){
                ok = false;
            }
        }

        for(int i=0;i<a;i++){
            if(b<=i && c<=i){
                break;
            }

            if(i<b){
                if(i<c){
                    if(B[i]<A[i] || C[i]<A[i] || C[i]<B[i]){
                        ok = false;
                    }
                }else{
                    if(B[i]<A[i]){
                        ok = false;
                    }
                }
            }
        }

        if(ok){
            ans++;
        }


    }while(next_permutation(vec.begin(),vec.end()));

    cout << ans << endl;
}