#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
void matrix_mult(int n,int m,int A[][2],int B[][2],int C[][2]){
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			C[i][j] = 0;
			for(int k = 0;k<m;k++)
				C[i][j] += A[i][k]*B[k][j];
		}
	}
	for(int i = 0;i<n;i++)
		for(int j = 0;j<m;j++)
			C[i][j] %= 26;
}
int main(){
	string msg = "weliveinaninsecureworldz";
	int key[2][2] = {{3,2},{5,7}};
	int len = msg.length();
	int i = 0;
	int P[30][2];
	while(i<len){
		for(int j = 0;j<2;j++){
			P[i/2][j] = msg[i+j]-'a';	
		}
		i+=2;
	}
	for(int i = 0;i<len/2;i++){
		printf("%02d&%02d",P[i][0],P[i][1]);
		printf("\\\\");
	}
	printf("\n");
	int C[30][2];
	matrix_mult(len/2,2,P,key,C);
	for(int i = 0;i<len/2;i++){
		printf("%02d&%02d",C[i][0],C[i][1]);
		printf("\\\\");
	}
	printf("\n");
	for(int i = 0;i<len/2;i++){
		printf("%c%c",C[i][0]+'A',C[i][1]+'A');
	}
}
