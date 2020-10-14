
cmake_minimum_required(VERSION 3.18)

project(atlast-crypto VERSION 0.0.1)
# use this to generate file list: 
#  ls ./atl_primitives/*wrap.c | sed -e 's_\./_"_' |  sed -e 's_$_"_'
add_executable(${PROJECT_NAME}
    main.c
    # "atl_primitives/crypto_atl.c"
    # "atl_primitives/ecdsa_atl.c"
    "atl_primitives/aes_wrap.c"
    "atl_primitives/base32_wrap.c"
    "atl_primitives/base58_wrap.c"
    "atl_primitives/bignum_wrap.c"
    "atl_primitives/bip32_wrap.c"
    "atl_primitives/bip39_wrap.c"
    "atl_primitives/ecdsa_wrap.c"
    "atl_primitives/hasher_wrap.c"
    "atl_primitives/hmac_drbg_wrap.c"
    "atl_primitives/hmac_wrap.c"
    "atl_primitives/sha2_wrap.c"
    "atl_primitives/sha3_wrap.c"
    "atl_primitives/slip39_wrap.c"
    
)

target_link_libraries(${PROJECT_NAME} atlast crypto m)


add_definitions(-g -Wall -DMEMSTAT -DALIGNMENT -DEXPORT -DREADONLYSTRINGS -DNOMEMCHECK)

include_directories("../atlast-forth/atlast-1.2")
include_directories("../crypto")