#include<stdio.h>

void Hanoi(int n,char *from,char *work,char *dest)
{
  if(n>=2) Hanoi(n-1,from,dest,work);

  printf("%d ‚ð %s ‚©‚ç %s ‚Ö\n",n,from,dest);

  if(n>=2) Hanoi(n-1,work,from,dest);
}

int main(void){
    int n,m,ans=0;
    vector<int> a;
    cin >> n >> m;
    for(int i=0;i<3;i++){
        int N;
        cin >> N;
        for(int i=)
    }
}