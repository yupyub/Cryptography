#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
int Z[12] = {1,3,5,7,9,11,15,17,19,21,23,25};
void AFFINE(string str){
    int len = str.length();
    int tmp;
    cout << "Encrypt : " << "\\\\" << endl;
    for(int i = 0;i<len;i++){
        tmp = str[i]-'a';
        cout << "${" << str[i] << "\\rightarrow " << tmp << " \\qquad ";
        cout << "((" << tmp << "\\times " << Z[i%12] << ") + " << i%26 << ")\\bmod 26 \\qquad ";
        tmp = (tmp*Z[i%12]+i%26)%26;
        str[i] = 'A'+tmp;
        cout << tmp << "\\rightarrow " << str[i] << "}$\\\\" << endl;
    }
    cout << "Encrypted message : " << str << "\\\\\\\\" << endl;
    /*
    cout << "Decrypt : " << "\\\\" << endl;
    for(int i = 0;i<len;i++){
        tmp = str[i]-'A';
        cout << "${" << str[i] << "\\rightarrow " << tmp << " \\qquad ";
        cout << "((" << tmp << "-" << key2 << ")\\times" << key3 << ")\\bmod 26 \\qquad ";
        tmp = ((tmp-key2+26)*key3)%26;
        str[i] = 'a'+tmp;
        cout << tmp << "\\rightarrow " << str[i] << "}$\\\\" << endl;
    }
    cout << "Decrypted message : " << str << "\\\\" << endl;
    */
}
int main(){
    string str;
    cin >> str;
    AFFINE(str);
    return 0;
}
