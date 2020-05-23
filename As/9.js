function Main(N){
    n= parseInt(N);

    console.log(Math.floor((n+1)/2));
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));