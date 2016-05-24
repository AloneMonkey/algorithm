class DES{
public:
	DES(char key[8]);
	void encrypt(char in[8],char out[8]);                               //加密
	void decrypt(char in[8],char out[8]);                               //解密
protected:
	void crypt(char out[8],char in[8],bool type=en);                    //加密解密通用函数
private:
	enum  {en,de};

	void leftloop(bool * in,int len, int loop);                         //循环左移

	void bittobyte(char *out,const bool *in,int bitlen);                //bit转换成byte

	void bytetobit(bool *out,const char *in,int bitlen);             	//byte转换成bit
	
	void xor(bool *ina,const bool *inb,int len);                        //异或操作
	
	void transt(bool *out,const bool *in,const int *table,int len);     //置换
	
	void initkey(const char key[8]);                                    //初始化密钥数组

	void f_func(bool in[32],const bool subkey[48]);                     //密码处理F函数

	void s_func(bool out[32],const bool in[48]);                        //S盒密码转换

	static bool subkey[16][48];                                         //16圈子密钥
	
	const static int IP_TABLE[64];                                      //置换IP表
	
	const static int IPR_TABLE[64];                                     //逆置换IP-1表

	const static int E_TABLE[48];                                       //E 位选择表

	const static int P_TABLE[32];                                       //P换位表

	const static int PC1_TABLE[56];                                     //pc1选位表

	const static int PC2_TABLE[48];                            	        //pc2选位表

	const static int LOOP_TABLE[16];                                    //左移位数表
	
	const static char S_BOX[8][4][16];                                   //S盒
};
