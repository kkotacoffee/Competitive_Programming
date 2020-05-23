function Main (N) {
    var n = parseInt(N);
    var sum = 0;
    for(var i=1;i<=n;i++){
        sum += 10000*i;
    }
    console.log(sum/n);
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8').split("\n"));