function Main (N) {
    var n = parseInt(N);
    console.log(2*n);
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8').split("\n"));