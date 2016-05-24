#include "aes.h"
#include <iostream>
using namespace std;

void main(){
	unsigned char mw[16] = {0x32, 0x88, 0x31, 0xe0, 0x43, 0x5a, 0x31,              //明文
		0x37,0xf6, 0x30, 0x98, 0x07, 0xa8, 0x8d, 0xa2, 0x34}; 
	unsigned char key[16] = {0x2b, 0x28, 0xab, 0x09, 0x7e, 0xae, 0xf7,             //密钥
		0xcf,0x15, 0xd2, 0x15, 0x4f, 0x16, 0xa6, 0x88, 0x3c};
	//unsigned char mw[17] = {"1234567893216549"};
	//unsigned char key[17] = {"1234567891234561"};
	AES aes(key);
	cout<<"明文：";
	for(int i = 0; i < 16; i++){
		printf("%0X ",mw[i]);
	}
	cout<<endl;
	cout<<"密钥：";
	for(i = 0; i < 16; i++){
		printf("%0X ",key[i]);
	}
	cout<<endl;
	aes.Clipher(mw);
	cout<<"加密后：";
	//printf("%s",mw);
	for(i = 0; i < 16; i++){
		printf("%0X ",mw[i]);
	}	
	cout<<endl;
	aes.InvClipher(mw);
	cout<<"解密后：";
	//printf("%s",mw);
	for(i = 0; i < 16; i++){
		printf("%0X ",mw[i]);
	}
	cout<<endl;
}