#include <bits/stdc++.h>

using namespace std;

int main(){
    double D,d;
    cin >> D >> d;
    d /= 60.0;

    if(d<0.25){
        cout << "C 0" << endl;
    }else{

        if(112<D && D<338){
            cout << "NNE";
        }else if(337<D && D<563){
            cout << "NE";
        }else if(562<D && D<788){
            cout << "ENE";
        }else if(787<D && D<1013){
            cout << "E";
        }else if(1012<D && D<1238){
            cout << "ESE";
        }else if(1237<D && D<1463){
            cout << "SE";
        }else if(1462<D && D<1688){
            cout << "SSE";
        }else if(1687<D && D<1913){
            cout << "S";
        }else if(1912<D && D<2138){
            cout << "SSW";
        }else if(2137<D && D<2363){
            cout << "SW";
        }else if(2362<D && D<2588){
            cout << "WSW";
        }else if(2587<D && D<2813){
            cout << "W";
        }else if(2812<D && D<3038){
            cout << "WNW";
        }else if(3037<D && D<3263){
            cout << "NW";
        }else if(3262<D && D<3488){
            cout << "NNW";
        }else{
            cout << "N";
        }

        cout << " ";

        if(0.25<=d && d<1.55){
            cout << 1 << endl;
        }else if(1.55<=d && d<3.35){
            cout << 2 << endl;
        }else if(3.35<=d && d<5.45){
            cout << 3 << endl;
        }else if(5.45<=d && d<7.95){
            cout << 4 << endl;
        }else if(7.95<=d && d<10.75){
            cout << 5 << endl;
        }else if(10.75<=d && d<13.85){
            cout << 6 << endl;
        }else if(13.85<=d && d<17.15){
            cout << 7 << endl;
        }else if(17.15<=d && d<20.75){
            cout << 8 << endl;
        }else if(20.75<=d && d<24.45){
            cout << 9 << endl;
        }else if(24.45<=d && d<28.45){
            cout << "10" << endl;
        }else if(28.45<=d && d<32.65){
            cout << "11" << endl;
        }else{
            cout << "12" << endl;
        }
    }
}