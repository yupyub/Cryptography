#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
void ADD(string str,int key){
    int len = str.length();
    int tmp;
    cout << "Encrypt : " << "\\\\" << endl;
    for(int i = 0;i<len;i++){
        tmp = str[i]-'a';
        cout << "${" << str[i] << "\\rightarrow " << tmp << " \\qquad ";
        cout << "(" << tmp << '+' << key << ")\\bmod 26 \\qquad ";
        tmp = (tmp+key)%26;
        str[i] = 'A'+tmp;
        cout << tmp << "\\rightarrow " << str[i] << "}$\\\\" << endl;
    }
    cout << "Encrypted message : " << str << "\\\\\\\\" << endl;
    cout << "Decrypt : " << "\\\\" << endl;
    for(int i = 0;i<len;i++){
        tmp = str[i]-'A';
        cout << "${" << str[i] << "\\rightarrow " << tmp << " \\qquad ";
        cout << "(" << tmp << '-' << key << ")\\bmod 26 \\qquad ";
        tmp = (tmp-key+26)%26;
        str[i] = 'a'+tmp;
        cout << tmp << "\\rightarrow " << str[i] << "}$\\\\" << endl;
    }
    cout << "Decrypted message : " << str << "\\\\" << endl;
}
void MULT(string str,int key1,int key2){
    int len = str.length();
    int tmp;
    cout << "Encrypt : " << "\\\\" << endl;
    for(int i = 0;i<len;i++){
        tmp = str[i]-'a';
        cout << "${" << str[i] << "\\rightarrow " << tmp << " \\qquad ";
        cout << "(" << tmp << "\\times " << key1 << ")\\bmod 26 \\qquad ";
        tmp = (tmp*key1)%26;
        str[i] = 'A'+tmp;
        cout << tmp << "\\rightarrow " << str[i] << "}$\\\\" << endl;
    }
    cout << "Encrypted message : " << str << "\\\\\\\\" << endl;
    cout << "Decrypt : " << "\\\\" << endl;
    for(int i = 0;i<len;i++){
        tmp = str[i]-'A';
        cout << "${" << str[i] << "\\rightarrow " << tmp << " \\qquad ";
        cout << "(" << tmp << "\\times" << key2 << ")\\bmod 26 \\qquad ";
        tmp = (tmp*key2)%26;
        str[i] = 'a'+tmp;
        cout << tmp << "\\rightarrow " << str[i] << "}$\\\\" << endl;
    }
    cout << "Decrypted message : " << str << "\\\\" << endl;
}
void AFFINE(string str,int key1,int key2,int key3){
    int len = str.length();
    int tmp;
    cout << "Encrypt : " << "\\\\" << endl;
    for(int i = 0;i<len;i++){
        tmp = str[i]-'a';
        cout << "${" << str[i] << "\\rightarrow " << tmp << " \\qquad ";
        cout << "((" << tmp << "\\times " << key1 << ") + " << key2 << ")\\bmod 26 \\qquad ";
        tmp = (tmp*key1+key2)%26;
        str[i] = 'A'+tmp;
        cout << tmp << "\\rightarrow " << str[i] << "}$\\\\" << endl;
    }
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
    cin >> str >> mode >> key1;
    if(mode == 0){
        ADD(str,key1);
        return 0;
    }
    cin >> key2;
    if(mode == 1){
        MULT(str,key1,key2);
        return 0;
    }
    cin >> key3;
    AFFINE(str,key1,key2,key3);
    return 0;
}
