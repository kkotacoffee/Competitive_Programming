function Main(N){
    N = N.trim();
    console.log(N.charCodeAt()-"A".charCodeAt()+1);
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));