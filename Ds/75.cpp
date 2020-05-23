#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K;
    long long int ans = 5*1e18;
    cin >> N >> K;
    vector<pair<long long int,long long int>> xy(N),yx(N);

    for(int i=0;i<N;i++){
        cin >> xy[i].first >> xy[i].second;
        yx[i].first = xy[i].second;
        yx[i].second = xy[i].first;
    }

    sort(xy.begin(),xy.end());
    sort(yx.begin(),yx.end());

    for(int i=K-1;i<N;i++){
        long long int xytate=xy[i].first-xy[i-(K-1)].first;
        long long int ymax=-1e10;
        long long int ymin=1e10;
        for(int j=i-(K-1);j<=i;j++){
            ymax=max(xy[j].second,ymax);
            ymin=min(xy[j].second,ymin);
        }
        ans = min(ans,xytate*(ymax-ymin));

        long long int yxtate=yx[i].first-yx[i-(K-1)].first;
        long long int xmax=-1e10;
        long long int xmin=1e10;
        for(int j=i-(K-1);j<=i;j++){
            xmax=max(yx[j].second,xmax);
            xmin=min(yx[j].second,xmin);
        }
        ans = min(ans,yxtate*(xmax-xmin));
    }

    cout << ans << endl;
}