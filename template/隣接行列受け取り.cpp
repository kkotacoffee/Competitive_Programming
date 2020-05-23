
void getmukou(){
    int j,k;
    cin >> j >> k;
    j--;
    k--;
    graph[j][k] = 1; 
    graph[k][j] = 1;
}

void getyukou(){
    int j,k;
    cin >> j >> k;
    j--;
    k--;
    graph[j][k] = 1;
}

void getomomi(){
    int j,k,weight;
    cin >> j >> k >> weight;
    j--;
    k--;
    graph[j][k] = weight;
}