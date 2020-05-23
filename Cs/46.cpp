#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long N;
    cin >> N;
    vector<unsigned long> T(N),A(N);
    for(unsigned long i=0;i<N;i++){
        cin >> T[i] >> A[i];
    }

    for(unsigned long i=1;i<N;i++){
        if(A[i-1]<T[i-1]){
            if(T[i-1]%T[i] != 0){
                T[i-1] += T[i]-(T[i-1]%T[i]);
            }
            A[i-1] = (T[i-1]/T[i])*A[i];
        }else if(T[i-1]<A[i-1]){
            if(A[i-1]%A[i] != 0){
                A[i-1] += A[i]-(A[i-1]%A[i]);
            }
            T[i-1] = (A[i-1]/A[i])*T[i];
        }else{
            if(A[i]>T[i]){
                if(T[i-1]%T[i] != 0){
                    T[i-1] += T[i]-(T[i-1]%T[i]);
                }
                A[i-1] = (T[i-1]/T[i])*A[i];
            }else if(T[i]>A[i]){
                if(A[i-1]%A[i] != 0){
                    A[i-1] += A[i]-(A[i-1]%A[i]);
                }
                T[i-1] = (A[i-1]/A[i])*T[i];
            }else{
            unsigned long mx = max(A[i-1],T[i-1]);
            A[i-1] = T[i-1] = mx;
            }
        }
        T[i] = T[i-1];
        A[i] = A[i-1];
    }

    cout << T[N-1]+A[N-1] << endl;
}