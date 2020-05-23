#include <bits/stdc++.h>

using namespace std;

int main(){
    string A;
    cin >> A;
    long long int ans=0;
    if(A.size()%2==0){
        int same=0,len = A.size();
        for(int i=0;i<len/2;i++){
            if(A[i]==A[len-1-i]){
                same++;
            }
        }

        for(int i=0;i<len;i++){
            int ng = same;
            if(A[i]==A[len-1-i]){
                ans += 25;
            }else{
                if(same+1 == len/2){
                    ans += 24;
                }else{
                    ans += 25;
                }
            }
        }

        cout << ans << endl;
        return 0;

    }else{

        int same=0,len = A.size();

        for(int i=0;i<len/2;i++){
            if(A[i]==A[len-1-i]){
                same++;
            }
        }

        for(int i=0;i<len;i++){
            int ng = same;
            if(i==len/2){
                if(same!=len/2){
                    ans += 25;
                }
            }else{
                if(A[i]==A[len-1-i]){
                    ans += 25;
                }else{
                    if(same+1 == len/2){
                        ans += 24;
                    }else{
                        ans += 25;
                    }
                }
            }
        }

        cout << ans << endl;
        return 0;
    }
}