function Main(N){
    st= N.split(" ").map(n=>parseInt(n));

    console.log(st[1]-st[0]+1);
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));