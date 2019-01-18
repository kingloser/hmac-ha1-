
#ifndef _HMAC_H_
#define _HMAC_H_

#include <stdint.h>
#include <stdlib.h>
#include "byte.h"
#include "sha1.h"
#include "md5.h"
#define MD5HashSize 16

// redis sha1: http://download.redis.io/redis-stable/src/sha1.c

extern void hmac_sha1(const char *text, size_t text_len, const char *key, size_t key_len, void *digest);

extern void hmac_md5(const char *text, size_t text_len, const char *key, size_t key_len, void *digest);

#endif
