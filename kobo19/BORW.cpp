#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,leftmax,leftmin,rightmax,rightmin,finx,fin=200;
    cin >> N;

    while(1){
        vector<int> num(N);
        for(int i=0;i<N;i++){
        cin >>  num[i];
        }

        for(int i=0;i++;i<N){
            finx = 0;
            int beforemod = 0;
            leftmax=leftmin=rightmax=rightmin=num[i];

            for(int j=i-1;j--;0<=j){

                if(num[j]<leftmin){
                    leftmin = num[j];
                }else if(leftmax<num[j]){
                    leftmax = num[j];
                }else{
                    cout <<"t";
                    finx ++;
                }

            }

        cout << finx;
        cout << finx;

            for(int j=i+1;j++;j<N){

                if(num[j]<rightmin){
                    rightmin = num[j];
                }else if(rightmax<num[j]){
                    rightmax = num[j];
                }else if(beforemod<num[j]&&num[j]<leftmax){
                    leftmax = beforemod = num[j];
                }else{
                    cout <<"k";
                    finx ++;
                }

            }
            
            if(finx<fin){
                fin = finx;
            }
        }
        
        cout << fin << endl;

        cin >> N;
        if(N==-1) break;
    }
    return 0;
}