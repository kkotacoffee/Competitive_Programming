function Main(N){
    N = N.trim();
    n = N.split(" ");
    console.log(n[1]+" "+n[0]+"\n");
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));