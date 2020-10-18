
cmake_minimum_required(VERSION 3.18)

project(wallycore VERSION 0.0.1)

# add_definitions(-g -Wall -DMEMSTAT -DALIGNMENT -DEXPORT -DREADONLYSTRINGS)
add_definitions( -DHAVE_CONFIG_H -DENABLE_MODULE_ECDH -DENABLE_MODULE_RECOVERY )

add_library("${PROJECT_NAME}"
"src/address.c"
"src/aes.c"
"src/base58.c"
"src/bech32.c"
"src/bip32.c"
"src/bip38.c"
"src/bip39.c"
"src/blech32.c"
"src/ecdh.c"
"src/elements.c"
"src/hex.c"
"src/hmac.c"
"src/internal.c"
"src/mnemonic.c"
"src/pbkdf2.c"
"src/psbt.c"
"src/script.c"
"src/scrypt.c"
"src/sign.c"
"src/symmetric.c"
"src/transaction.c"
"src/wif.c"
"src/wordlist.c"

"src/secp256k1/src/gen_context.c"
"src/secp256k1/src/secp256k1.c"
# "src/secp256k1/src/gen_context.c"


"src/ccan/ccan/endian/test/compile_ok-constant.c"
"src/ccan/ccan/crypto/sha256/sha256_sse4.c"
"src/ccan/ccan/crypto/sha256/sha256.c"
"src/ccan/ccan/crypto/ripemd160/ripemd160.c"
"src/ccan/ccan/crypto/ripemd160/test/run-test-vectors.c"
"src/ccan/ccan/crypto/ripemd160/test/run-lotsa-data.c"
"src/ccan/ccan/crypto/ripemd160/test/run-types.c"
"src/ccan/ccan/crypto/sha512/sha512.c"
"src/ccan/ccan/base64/base64.c"
"src/ccan/ccan/tap/tap.c"
"src/ccan/ccan/str/hex/hex.c"

"src/secp256k1/src/modules/ecdh/main_impl.h"

)
include_directories( 
    . 
    "src"
    "src/ccan"
    "src/secp256k1"
    "src/secp256k1/include"
    "src/secp256k1/src/modules/ecdh"
)

target_include_directories("${PROJECT_NAME}" 
  PUBLIC 
    "include"
)