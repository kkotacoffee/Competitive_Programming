#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<string> nums(10),ans(n);
    vector<vector<int>> costs(n,vector<int>(10,0));
    nums[0] = "1110111";
    nums[1] = "0010010";
    nums[2] = "1011101";
    nums[3] = "1011011";
    nums[4] = "0111010";
    nums[5] = "1101011";
    nums[6] = "1101111";
    nums[7] = "1010010";
    nums[8] = "1111111";
    nums[9] = "1111011";
    for(int i=0;i<n;i++){
        cin >> ans[i];
        for(int j=0;j<10;j++){
            for(int k=0;k<7;k++){
                if(ans[i][k]==0 && nums[j][k]==1){
                    costs[i][j]++;
                }else if(ans[i][k]==1 && nums[j][k]==0){
                    costs[i][j] = -1;
                    continue;
                }
            }
        }

        
    }
}