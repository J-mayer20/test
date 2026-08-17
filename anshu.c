#include<stdio.h>
int main(){
    int a[3][4];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int k=0;
    for(i=0;i<3;i++){
        int t=a[i][0];
        int c=0;
        for(j=1;j<4;j++){
            if(a[i][j]>t){
                t=a[i][j];
                c=j;
            }
        }
        int d=1;
        for(int m=0;m<3;m++){
            if(a[m][c]<t){
                d=0;
                break;
            }
        }
        if(d) {
            printf("%d %d %d",t,i+1,c+1);
            k=1;
            break;
        }
    }
    if(!k) printf("no");
}
