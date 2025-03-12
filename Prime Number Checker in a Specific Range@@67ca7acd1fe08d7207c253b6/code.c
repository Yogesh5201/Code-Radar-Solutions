void printPrimesInRanges(int a,int b){
    for(int i=a;i<=b;i++){
        if(i<=0){
            continue;
        }
        else{
            for(int j=0,j*j<i;j++){
                if(j%i==0){
                    printf("%d",i);
                }
            }
        }
    }
}