

long long int N,M,ans=1e9,tmp;
    cin >> N >> M;
    long long int d[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                d[i][j] = 0;
            }else{
                d[i][j] = 1e9;
            }
        }
    }

    for(int i=0;i<M;i++){
        int a,b,t;
        cin >> a >> b >> t;
        a--;
        b--;
        d[a][b] = t;
        d[b][a] = t;
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                d[j][k] = min(d[j][k],d[j][i]+d[i][k]);
            }
        }
    }