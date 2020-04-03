#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int main(){
	int n;
	char str[100];
	int arr[30][30];
	scanf("%d %s",&n,str);
	int len = strlen(str);
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(i*n+j < len)
				arr[i][j] = str[i*n+j]-'A';
			else
				arr[i][j] = 'z'-'a';
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n-1;j++){
			printf("%02d&",arr[i][j]);
		}
		printf("%02d\\\\\n",arr[i][n-1]);
	}
}
