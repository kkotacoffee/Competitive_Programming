function Main(N){
    n = parseInt(N);

    console.log(n-1);
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));