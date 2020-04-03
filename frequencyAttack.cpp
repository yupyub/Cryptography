#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
pair<int,int> freq[26];
int main(){
	char str[100][100];
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
		scanf("%s",str[i]);
	for(int i = 0;i<26;i++){
		freq[i].first = 0;
		freq[i].second = i;
	}
	for(int i = 0;i<n;i++)
		for(int j = 0;j<strlen(str[i]);j++)
			freq[(int)(str[i][j]-'A')].first--;
	sort(freq,freq+26);
	printf("\n\n");
	for(int i = 0;i<13;i++){
		printf("%c&%d&%c&%d\\\\ \\hline\n",freq[i].second+'A',-freq[i].first,freq[13+i].second+'A',-freq[13+i].first);
	}
}
