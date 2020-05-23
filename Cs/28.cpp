#include <bits/stdc++.h>

using namespace std;

int main(){
    int num[5],c=0;
    vector<int> sum;
    for(int i=0;i<5;i++){
        cin >> num[i];
    }

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int n=j+1;n<5;n++){
                sum.push_back(num[i]+num[j]+num[n]);
            }
        }
    }

    sort(sum.begin(),sum.end());

    for(int i=sum.size()-2;;i--){
        if(sum[i] != sum[i+1]){
            c++;
        }

        if(c == 2){
            cout << sum[i] << endl;
            break;
        }
    }
}