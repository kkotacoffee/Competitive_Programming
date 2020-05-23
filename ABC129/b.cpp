#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string line;
    int number,N,fin=100000,sum=0,sum2=0;
    vector<int> numbers;
    getline(cin,line);
    N = stoi(line);
    getline(cin,line);
    istringstream stream(line);
    while (stream >> number)
    numbers.push_back(number);
    for(int i=0;i<N;i++){
        sum += numbers[i];
    }
    cout << sum;
for(int i=0;i<N;i++){
  sum2 += numbers[i];
fin = min(fin,abs(sum/2-sum2));
}
cout << fin << endl;
return 0;
}