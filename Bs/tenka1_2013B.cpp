#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int Q,L,now = 0;
    cin >> Q >> L;
    stack<pair<int,int>> ST;
    for(int i=0;i<Q;i++){
        string S;
        cin >> S;
        if(S=="Push"){

            long long int N,M;
            cin >> N >> M;

            if(L<now+N){
                cout << "FULL" << endl;
                return 0;
            }

            now += N;
            ST.push({N,M});

        }else if(S=="Pop"){

            long long int N,tmp=0,num;
            cin >> N;

            now -= N;

            if(now<0){
                cout << "EMPTY" << endl;
                return 0;
            }

            for(int i=0;;i++){
                tmp += ST.top().first;
                num = ST.top().second;
                if(N<tmp){
                    ST.pop();
                    ST.push({tmp-N,num});
                    break;
                }else{
                    ST.pop();
                    if(N-tmp==0){
                        break;
                    }
                }
            }

        }else if(S=="Top"){

            if(ST.size()==0){
                cout << "EMPTY" << endl;
                return 0;
            }

            cout << ST.top().second << endl;

        }else{
            cout << now << endl;
        }
    }
    cout << "SAFE" << endl;
}