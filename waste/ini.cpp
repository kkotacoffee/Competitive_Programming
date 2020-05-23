#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,ans;
    int k;
    ans = "";
    cin >> k >> s;
    
    if(s.size()<=k){
        cout << s << endl;
    }else{
        for(int i=0;i<k;i++){
            ans += s[i];
        }

        cout << ans << "..." << endl;
    }
}