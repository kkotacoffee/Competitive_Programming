#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int M,ans=0,ad=0,sum=0,d,c;
    cin >> M;
    for(int i=0;i<M;i++){
        cin >> d >> c;
        ad += d*c;
        sum += c;
    }
    
    cout << (ad/9)+sum-1 << endl;
}