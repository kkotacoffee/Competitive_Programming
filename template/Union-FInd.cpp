#define MAX_N 1000000

long long int par[MAX_N]; //親
long long int Rank[MAX_N]; //木の深さ
long long int Size[MAX_N];

void init(long long int n){
    for(int i=0;i<n;i++){
        par[i] = i;
        Rank[i] = 0;
        Size[i] = 1;
    }
}

long long int find(long long int x){
    if(par[x] == x){
        return x;
    }else{
        return par[x] = find(par[x]);
    }
}

void unite(long long int x, long long int y){
    x = find(x);
    y = find(y);

    if(x==y){
        return;
    }

    if(Rank[x] < Rank[y]){
        par[x] = y;
        Size[y] += Size[x];
    }else{
        par[y] = x;
        Size[x] += Size[y];
        if(Rank[x] == Rank[y]){
            Rank[x]++;
        }
    }
}

bool same(long long int x, long long int y){
    return find(x) == find(y);
}

long long int size(long long int x){
    return Size[find(x)];
}