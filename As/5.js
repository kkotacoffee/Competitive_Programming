function Main(N){
    xy = N.split(" ").map(n=>parseInt(n));
    console.log(Math.floor(xy[1]/xy[0]));
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));