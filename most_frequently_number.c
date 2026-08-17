#include<stdio.h>
int main(){
    int i,N;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    int c[10] = {0};
    for(i=0; i<N; i++){
        int n = a[i];
        if(n == 0){
            c[0]++;
            continue;
        }
        for(int t = n; t > 0; t= t/ 10){
            int d = t % 10;
            c[d]++;
        }
    }
    int m = 0;
    for(i=0; i<10; i++){
        if(c[i] > m){
            m = c[i];
        }
    }
    printf("%d:", m);
    int f = 1;
    for(i=0; i<10; i++){
        if(c[i] == m){
            if(f){
                printf(" %d", i);
                f = 0;
            } else {
                printf(" %d", i);
            }
        }
    }
}
