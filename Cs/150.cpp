#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,a,b,count=1;
    cin >> N;
    vector<int> vec(N),P(N),Q(N);
    for(int i=0;i<N;i++){
        vec[i] = i+1;
        cin >> P[i];
    }

    for(int i=0;i<N;i++){
        cin >> Q[i];
    }

    do{
        for(int i=0;i<N;i++){
            if(P[i]!=vec[i]){
                break;
            }

            if(i==N-1){
                a = count;
            }
        }

        for(int i=0;i<N;i++){
            if(Q[i]!=vec[i]){
                break;
            }

            if(i==N-1){
                b = count;
            }
        }

        count++;
        
    }while(next_permutation(vec.begin(),vec.end()));

    cout << abs(a-b) << endl;
}