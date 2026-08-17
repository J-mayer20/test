#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int c;
        c=1;
        for(int m=2;m<i;m++){
            if (i % m==0){
                c=0;
                break;
            }
        }
        if(c){
            printf(" %d",i);
        }
    }
    return 0;
}
