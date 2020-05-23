#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> P;

int main(){
    string S1,S2,S3;
    int sum1=0,sum2=0;
    cin >> S1;
    cin >> S2;
    cin >> S3;

    map<char,int> mp1,mp2,mp3;

    for(int i=0;i<S1.size();i++){
        mp1[S1[i]]++;
        mp2[S2[i]]++;
        mp3[S3[i]]++;
    }

    for(auto itr = mp3.begin(); itr !=mp3.end() ; itr++){
        sum1 += min(itr->second,mp1[itr->first]);
        sum2 += min(itr->second,mp2[itr->first]);
        if(mp2[itr->first] + mp3[itr->first] < itr->second){
            cout << "NO" << endl;
            return 0;
        }
    }

    if(sum1<S1.size()/2 || sum2<S1.size()/2){
        cout  << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}