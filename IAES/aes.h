class AES{
public:
	AES(unsigned char key[16]);
	unsigned char* Clipher(unsigned char* input);                     //加密过程
	unsigned char* InvClipher(unsigned char* input);                  //解密过程
protected:
private:
	unsigned char static SBOX[256];                                   //置换表
	unsigned char static INVSBOX[256];                                //逆置换表
	unsigned char static RoundKey[240];                               //扩展后的子密钥
	void SubBytes(unsigned char state[][4]);                          //字节替代
	void ShiftRows(unsigned char state[][4]);                         //行移位变换
	void MixColumns(unsigned char state[][4]);                        //列混淆变换
	void AddRoundKey(unsigned char state[][4],int round);             //轮密钥加变换
	void KeyExpansion(unsigned char key[16]);                         //密钥扩展
	void InvSubBytes(unsigned char state[][4]);                       //逆字节替代
	void InvShiftRows(unsigned char state[][4]);                      //逆行移位
	void InvMixColumns(unsigned char state[][4]);                     //逆列混淆
	unsigned char AES::FFmul(unsigned char a, unsigned char b);       //有限域GF(28)上的乘法
};
