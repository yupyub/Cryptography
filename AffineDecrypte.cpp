#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
void AFFINE(string str,int key1,int key2,int key3){
    int len = str.length();
    int tmp;
    /*
    cout << "Encrypt : " << "\\\\" << endl;
    for(int i = 0;i<len;i++){
        tmp = str[i]-'a';
        cout << "${" << str[i] << "\\rightarrow " << tmp << " \\qquad ";
        cout << "((" << tmp << "\\times " << key1 << ") + " << key2 << ")\\bmod 26 \\qquad ";
        tmp = (tmp*key1+key2)%26;
        str[i] = 'A'+tmp;
        cout << tmp << "\\rightarrow " << str[i] << "}$\\\\" << endl;
    }*/
    cout << "Encrypted message : " << str << "\\\\\\\\" << endl;
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
}
int main(){
    string str;
    int mode,key1,key2,key3;
    cin >> str >> key1 >> key2 >> key3;
    AFFINE(str,key1,key2,key3);
    return 0;
}
