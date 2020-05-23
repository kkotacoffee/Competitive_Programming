function Main(N){
    n = parseInt(N);

    if(n%3==0){
        console.log("YES");
    }else{
        console.log("NO");
    }
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));