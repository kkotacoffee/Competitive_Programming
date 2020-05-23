#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int k;
string name;
cin >> n >> k;
cin >> name;
if(name[k-1]=='A'){
name[k-1]='a';
}
if(name[k-1]=='B'){
name[k-1]='b';
}
if(name[k-1]=='C'){
name[k-1]='c';
}
cout << name << endl;
return 0;
}