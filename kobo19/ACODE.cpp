#include <bits/stdc++.h>

using namespace std;

long long int num;

int digit_length( int num ){
    int count = 0;
    while( num ) {
        num = num / 10;
        ++count;
    }
    return count;
}

int main(){
    cin >> num;
    while(num!=0){

        int numlen = digit_length(num);
        bool flag = false;
        vector<int> nums(numlen);
        vector<int> sum(numlen,0);

        sum[0]=1;

        for(int i=numlen-1;0<=i;i--){
            nums[i] = num%10;
            num /= 10;
        }

        if(nums[1]==0){
            sum[1]=0;
        }else

        for(int i=1;i<numlen;i++){
            if(nums[i]==0&&nums[i-1]==0){
                flag = true;
            }
        }

        if(2<nums[numlen-2]&&nums[numlen-1]==0){
            flag = true;
        }

        for(int i=2;i<=numlen;i++){
            
            int shortnum = 10*nums[i-2] + nums[i-1];
        
            if(0<shortnum&&shortnum<27&&nums[i-2]!=0&&nums[i-1]!=0){
                sum[i] = sum[i-1]+sum[i-2];
            }else{
                sum[i] = sum[i-1];
            }
            cout << sum[i];
        }
        if(flag){
            cout << "0" << endl;
        }else{
            cout << sum[numlen] << endl;
        }
        cin >> num;
    }

    return 0;
}