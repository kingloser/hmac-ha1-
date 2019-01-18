#include "main.h"

int main(int argc, char **argv) {
	char key_intput[100];
	char msg_intput[100];
const	char *key, *msg;
	printf("please intput your key,never over 100:");
	scanf("%s", key_intput);
	printf("please intput your msg,never over 100:");
	scanf("%s", msg_intput);
	key = &key_intput[0];
	msg = &msg_intput[0];

	void *bytes[SHA1HashSize];
	hmac_sha1(msg, strlen(msg), key, strlen(key), bytes);
	printf("%s\n", btoa(bytes, SHA1HashSize));
	return 0;
}

