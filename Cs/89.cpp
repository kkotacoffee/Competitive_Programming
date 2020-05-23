#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,count=0;
    vector<long long int> f(5,0);
    long long int ans=0,sum=1;
    string name;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> name;
        if(name[0] == 'M'){
            f[0]++;
        }else if(name[0] == 'A'){
            f[1]++;
        }else if(name[0] == 'R'){
            f[2]++;
        }else if(name[0] == 'C'){
            f[3]++;
        }else if(name[0] == 'H'){
            f[4]++;
        }
    }

    for(int i=0;i<5;i++){
        if(0<f[i]){
            count++;
            sum *= f[i];
        }
    }

    if(count<3){
        cout << 0 << endl;
    }else if(count == 3){
        cout << sum << endl;
    }else if(count == 4){
        for(int i=0;i<5;i++){
            if(f[i]!=0){
                ans += sum/f[i];
            }
        }
        cout << ans << endl;
    }else{
        for(int i=0;i<3;i++){
            for(int j=i+1;j<4;j++){
                for(int n=j+1;n<5;n++){
                    ans += f[i]*f[j]*f[n];
                }
            }
        }
        cout << ans << endl;
    }
}