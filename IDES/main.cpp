#include "des.h"
#include <iostream>
using namespace std;

void main(){
	char key[9] = {"program."};           //密钥
	char mw[9] = {"12345678"};            //明文
	cout<<"明文:"<<mw<<endl;
	cout<<"密钥:"<<key<<endl;
	DES des(key);
	des.encrypt(mw,mw);
	cout<<"加密后："<<mw<<endl;
	des.decrypt(mw,mw);
	cout<<"解密后："<<mw<<endl;
}
