#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        long long int a;
        cin >> a;
        if(a%2==1){
            cout << "first" << endl;
            return 0;
        }
    }

    cout << "second" << endl;
}