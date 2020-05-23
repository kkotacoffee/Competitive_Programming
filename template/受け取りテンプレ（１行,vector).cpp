vector<int> getelem(){
    string line;
    int number;
    vector<int> numbers;
    getline(cin,line);
    istringstream stream(line);
    while (stream >> number)
    numbers.push_back(number);
}