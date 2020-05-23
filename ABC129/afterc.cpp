#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;

    vector<long long int> dps(N+1,0);
    dps[0]=1;
    
    for(int i=0;i<M;i++){
        int a;
        cin >> a;
        dps[a+1]=-1;
    }

    for(int i=0;i<N;i++){
        if(dps[i]==-1&&dps[i+1]==-1){
            break;
        }
        if(dps[i]!=-1){
        for(int j=i+1;j<=min(N,i+2);j++){
            if(dps[j]!=-1){
            dps[j] += dps[i];
            }
        }
        }
    }
    cout << dps[N] << endl;
}