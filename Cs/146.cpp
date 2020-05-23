#include <bits/stdc++.h>

using namespace std;

long long int A,B,X;

long long int digit(long long int x){
    string num;
    num = to_string(x);
    return num.length();
}

long long int binarysearch(long long int lb,long long int ub){
    while(ub-lb>1){
        long long int mid = (lb+ub)/2;
        if(mid*A+digit(mid)*B>X){
            ub = mid;
        }else{
            lb = mid;
        }
    }
    return lb;
}

int main(){
    cin >> A >> B >> X;
    cout << binarysearch(0,1000000001) << endl;
}