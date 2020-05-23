#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    bool flag = false;
    cin >> S;
    int nowlast = S.size()-1;
    while(1){
        if(nowlast==-1){
            flag = true;
            break;
        }else if(nowlast<4){
            break;
        }else if(S.substr(nowlast-4,5)=="dream"){
            nowlast -= 5;
        }else if(S.substr(nowlast-4,5)=="erase"){
            nowlast -= 5;    
        }else if(nowlast==4){
            break;
        }else if(S.substr(nowlast-5,6)=="eraser"){
            nowlast -= 6;
        }else if(nowlast==5){
            break;
        }else if(S.substr(nowlast-6,7)=="dreamer"){
            nowlast -= 7;
        }else{
            break;
        }
    }

    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}