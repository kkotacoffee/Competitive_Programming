#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,now=0;
    string W,ans="";
    cin >> x >> y >> W;
    x--;
    y--;
    vector<string> c(9);
    for(int i=0;i<9;i++){
        cin >> c[i];
    }

    while(now!=4){

        ans += c[y][x];

        if(W=="R" && x==8){
            W = "L";
        }else if(W=="L" && x==0){
            W = "R";
        }else if(W=="U" && y==0){
            W = "D";
        }else if(W=="D" && y==8){
            W = "U";
        }else if(W=="RU"){

            if(x==8 && y==0){
                W = "LD";
            }else if(x==8){
                W = "LU";
            }else if(y==0){
                W = "RD";
            }

        }else if(W=="RD"){

            if(x==8 && y==8){
                W = "LU";
            }else if(x==8){
                W = "LD";
            }else if(y==8){
                W = "RU";
            }

        }else if(W=="LU"){

            if(x==0 && y==0){
                W = "RD";
            }else if(x==0){
                W = "RU";
            }else if(y==0){
                W = "LD";
            }
            
        }else if(W=="LD"){
            
            if(x==0 && y==8){
                W = "RU";
            }else if(x==0){
                W = "RD";
            }else if(y==8){
                W = "LU";
            }

        }

        if(W=="R"){
            x++;
        }else if(W=="L"){
            x--;
        }else if(W=="U"){
            y--;
        }else if(W=="D"){
            y++;
        }else if(W=="RU"){
            x++;
            y--;
        }else if(W=="RD"){
            x++;
            y++;
        }else if(W=="LU"){
            x--;
            y--;
        }else if(W=="LD"){
            x--;
            y++;
        }
        now++;
    }

    cout << ans << endl;
}