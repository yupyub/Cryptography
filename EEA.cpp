#include <cstdio>
int main(){
    int mode;
    scanf("%d",&mode);
    while(1){
        int n,b;
        scanf("%d %d",&n,&b);
        int r1 = n,r2 = b;
        int s1 = 1,s2 = 0;
        int t1 = 0,t2 = 1;
        int r,t,q,s;
        while(r2>0){
            q = r1/r2;
            r = r1-q*r2;
            s = s1-q*s2;
            t = t1-q*t2;
            if(mode)printf("|%3d|%3d|%3d|%3d|%3d|%3d|%3d|%3d|%3d|%3d|\n",q,r1,r2,r,s1,s2,s,t1,t2,t);
            else printf("%d&%d&%d&%d&%d&%d&%d&%d&%d&%d\\\\ \\hline \n",q,r1,r2,r,s1,s2,s,t1,t2,t);
            r1 = r2,r2 = r;
            t1 = t2,t2 = t;
            s1 = s2,s2 = s;
        }
        if(mode)printf("|   |%3d|%3d|   |%3d|%3d|   |%3d|%3d|   |\n",r1,r2,s1,s2,t1,t2);
        else printf("&%d&%d&&%d&%d&&%d&%d&\\\\ \\hline \n",r1,r2,s1,s2,t1,t2);
        printf("gcd(%d,%d) : %d\n",n,b,r1);
        printf("s = %d, t = %d\n",s1,t1);
    
    }
}

