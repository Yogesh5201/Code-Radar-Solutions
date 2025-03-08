int fibonacciSeries(n){
    int a=0;
    int b=1;
    int c;
    for(int i=0;i<n;i++){
        a=b;
        b=c;
        c=a+b;
        printf("%d",c);
    }
}