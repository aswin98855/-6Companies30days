int trailingZeroes(int n){
    int k=0;
    while(n!=0){
        k=k+n/5;
        n=n/5;
    }
    return k;
}