//G‚ÍŸ”@N‚ÍŒ…”

#define G 3;

vector<int> K(N);

    for(int i=0;i<pow(G,N);i++){
        for(int j=0;j<N;j++){
            if(K[j]==G){
                K[j+1]++;
            }else{
                break;
            }
        }
        //ŠeŒ…‚ÌQÆ
        K[0]++;
    }