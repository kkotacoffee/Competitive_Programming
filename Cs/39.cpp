#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;
    if(S == "WBWBWWBWBWBWWBWBWWBW"){
        cout << "Do" << endl;
    }else if(S == "WBWWBWBWBWWBWBWWBWBW"){
        cout << "Re" << endl;
    }else if(S == "WWBWBWBWWBWBWWBWBWBW"){
        cout << "Mi" << endl;
    }else if(S == "WBWBWBWWBWBWWBWBWBWW"){
        cout << "Fa" << endl;
    }else if(S == "WBWBWWBWBWWBWBWBWWBW"){
        cout << "So" << endl;
    }else if(S == "WBWWBWBWWBWBWBWWBWBW"){
        cout << "La" << endl;
    }else{
        cout << "Si" << endl;
    }
}