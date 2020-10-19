
1 constant AES_FLAG_ENCRYPT
2 constant AES_FLAG_DECRYPT

16 constant AES_BLOCK_LEN

16 constant AES_KEY_LEN_128
24 constant AES_KEY_LEN_192
32 constant AES_KEY_LEN_256

32 string key

"a vry secret key" key s!

10 AES_BLOCK_LEN * string input
"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut" input s!

10 AES_BLOCK_LEN * string encrypted

key AES_KEY_LEN_128 input 7 AES_BLOCK_LEN * AES_FLAG_ENCRYPT encrypted 160 wally_aes
drop

10 AES_BLOCK_LEN * string decrypted
key AES_KEY_LEN_128 encrypted dup strlen AES_FLAG_DECRYPT decrypted 160 wally_aes
drop

int wally_aes(const unsigned char *key, size_t key_len,
              const unsigned char *bytes, size_t bytes_len,
              uint32_t flags,
              unsigned char *bytes_out, size_t len)