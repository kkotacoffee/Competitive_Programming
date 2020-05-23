function Main(N){
    n = parseInt(N);
    if(n==12){
        console.log(1);
    }else{
        console.log(n+1);
    }
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));