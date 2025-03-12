
void printPrimesInRange(int a,int b){
    int count=0;
    for(int i=a;i<=b;i++){
        if(i<=1){
            continue;
        }
        else{
            
            for(int j=2;j*j<i;j++){
                if(i%j==0){
                    printf("%d",i);
                    count++;
                }
            
            }}
        }if(count==0){
                printf("No prime numbers");
    }
}