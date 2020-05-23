bool sosuu(long long int x){
    for(long long int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}