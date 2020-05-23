for(int i=0;i<N;i++){
        cin >> A[i];
        for(int j=0;0<A[i];j++){
            bit[i][j] = A[i]%2;
            A[i] /= 2;
        }
    }