#include <cstdio>
int main(){
    while(1){
        int n,b;
        scanf("%d %d",&n,&b);
        int r1 = n,r2 = b;
        int t1 = 0,t2 = 1;
        int r,t,q;
        while(r2>0){
            q = r1/r2;
            r = r1-q*r2;
            t = t1-q*t2;
            printf("|%3d|%3d|%3d|%3d|%3d|%3d|%3d|\n",q,r1,r2,r,t1,t2,t);
            r1 = r2,r2 = r;
            t1 = t2,t2 = t;
        }
        printf("|   |%3d|%3d|   |%3d|%3d|   |\n",r1,r2,t1,t2);
        
        if(r1 == 1)
            printf("ans : %d\n",t1);
        else
            printf("ans : NONE\n");
    }
}

