long long int factorial(long long int N){
    for(int i=N-1;1<i;i--){
        N *= i;
        N %= 1000000007;
    }
    return N;
    // 1000000007
}