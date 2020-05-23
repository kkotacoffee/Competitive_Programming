#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int f,s,g,u,d,now;
    pair<int,int> pnow;
    queue<pair<int,int>> q;
    bool flag = false;
    cin >> f >> s >> g >> u >> d;
    vector<bool> v(f+1,true);
    v[s] = false;

    if(s<g && u==0 || g<s && d==0){
        cout << "use the stairs" << endl;
    }else{

        q.emplace(s,0);

        while(!q.empty()){
            pnow = q.front();
            q.pop();
            if(pnow.first == g){
                flag = true;
                break;
            }else{
                if(0< pnow.first-d && v[pnow.first-d]){
                    q.emplace(pnow.first-d,pnow.second+1);
                    v[pnow.first-d] = false;
                }
                if(pnow.first+u <= f && v[pnow.first+u]){
                    q.emplace(pnow.first+u,pnow.second+1);
                    v[pnow.first+u] = false;
                }
            }
        }

        if(flag){
            cout << pnow.second << endl;
        }else{
            cout << "use the stairs" << endl;
        }

    }
}