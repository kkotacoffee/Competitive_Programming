#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,time=0;
    cin >> N;
    vector<pair<long long int,long long int>> AB(N);
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a >> b;
        AB[i].first = b;
        AB[i].second = a;
    }

    sort(AB.begin(),AB.end());

    if(N==1 && AB[0].first-AB[0].second<0){
        cout << "No" << endl;
        return 0;
    }

    for(int i=1;i<N;i++){
        time += AB[i-1].second;
        if(AB[i].first-AB[i].second<time){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}