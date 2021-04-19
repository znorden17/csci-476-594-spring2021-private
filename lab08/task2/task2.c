#include <stdio.h>
#include <openssl/bn.h>


void printBN(char *msg, BIGNUM *a)
{
	char *num_str = BN_bn2hex(a);
	printf("%s %s \n", msg, num_str);
	OPENSSL_free(num_str);

}


int main()
{
	BN_CTX *ctx = BN_CTX_new();
	BIGNUM *m = BN_new(); // message private key - from cmd ln
	BIGNUM *e = BN_new(); // e
	BIGNUM *n = BN_new(); // n
	BIGNUM *d = BN_new();

	BN_hex2bn(&n, "DCBFFE3E51F62E09CE7032E2677A78946A849DC4CDDE3A4D0CB81629242FB1A5");
	BN_hex2bn(&e, "010001");
	BN_hex2bn(&m, "4120746f702073656372657421");
		
	BN_mod_exp(d,m,e,n,ctx);

	printBN("Encryption:",C);

	return 0;
}
