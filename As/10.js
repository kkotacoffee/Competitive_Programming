function Main(N){
    n = N.split("\n");
    console.log(n[0] + "pp\n");
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));