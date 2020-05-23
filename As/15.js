function Main(N){
    ab = N.map(String);
    if(ab[0].length<ab[1].length){
        console.log(ab[1]);
    }else{
        console.log(ab[0]);
    }
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8').split("\n"));