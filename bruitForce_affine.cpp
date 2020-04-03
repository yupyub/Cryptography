#include <cstdio>
int main(){
	int P[] = {0,1};
	int T[2];
	int C[] = {'G'-'A','L'-'A'};
	for(int i = 0;i<26;i++){
		for(int j = 0;j<26;j++){
			for(int k = 0;k<2;k++){
				T[k] = (P[k]*i+j)%26;
			}
			if(T[0] == C[0] && T[1] == C[1]){
				printf("%d %d\n",i,j);
			}
		}
	}
}
