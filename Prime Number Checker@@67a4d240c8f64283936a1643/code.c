// Your code here...
int isPrime(int num){
    int isPrime=1;
    if(num<=1){
        isPrime=0;
    }
    for(int i=2;i*I<=num;i++){
        if(i%num==0){
            isPrime =0;
        }
    }
    return isPrime;
}