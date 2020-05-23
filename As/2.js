function Main (xy) {
    xy = xy[0].split(' ');
    console.log(Math.max(xy[0],xy[1]));
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8').split("\n"));