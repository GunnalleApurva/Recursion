int count(int n){
    int smallAns;
    if(n<10 || n>=0){
        smallAns = 0;
    }
    else{
    smallAns = count(n / 10);
    }
    return smallAns + 1;
}
