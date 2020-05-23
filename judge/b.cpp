#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N;
    cin >> N;
    vector<int> R,B;
    for(int i=0;i<N;i++){
        int x;
        char c;
        cin >> x >> c;
        if(c=='B'){
            B.push_back(x);
        }else{
            R.push_back(x);
        }
    }

    sort(B.begin(),B.end());
    sort(R.begin(),R.end());

    for(int i=0;i<R.size();i++){
        cout << R[i] << endl;
    }

    
    for(int i=0;i<B.size();i++){
        cout << B[i] << endl;
    }
}