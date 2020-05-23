function Main(N){
    ab = N.map(n=>parseInt(n));
    if(ab[0]<=ab[1]){
        console.log(ab[1]-ab[0]);
    }else{
        console.log(ab[1] - ab[0]%ab[1]);
    }
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8').split("\n"));