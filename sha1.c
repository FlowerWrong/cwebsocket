#include <openssl/sha.h>
#include <stdio.h>

/* gcc sha1.c -o sha -lcrypto */
int main() {
    // The data to be hashed
    char data[] = "Hello, world!";
    size_t length = sizeof(data);

    unsigned char hash[SHA_DIGEST_LENGTH];
    SHA1(data, length, hash);
    // hash now contains the 20-byte SHA-1 hash
    printf("data is %s\n", data);
    printf("hash is %s\n", hash);
    return 0;
}
