#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string line;
    int a,b,c=0,flag=0,n=2,number;
    vector<int> numbers,nums,ns;
    getline(cin,line);
    istringstream stream(line);
    while (stream >> number)
    numbers.push_back(number);

    for(int i=0;i<numbers[1];i++){
         scanf_s("%d",num[])
    }

ns.push_back(0);
ns.push_back(1);

while (n<numbers[0]+1){
if(n != nums[c]){
    ns.push_back(ns[n-2]+ns[n-1]);
    flag =0;
    n++;
}else if(flag==1){
    break;
}else{
    ns.push_back(0);
    n++;
    ns.push_back(ns[n-2]);
    n++;
    flag=1;
    c++;
}
}
if(flag==1){
    cout << '0' <<endl;
}
cout << ns[n] << endl;
    return 0;
}