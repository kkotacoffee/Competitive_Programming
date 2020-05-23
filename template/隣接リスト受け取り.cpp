
int getlist(){
    //cin >> N;
    //vector<vector<int>> graph(N);
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
}