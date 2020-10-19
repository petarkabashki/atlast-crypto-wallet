
cmake_minimum_required(VERSION 3.18)

project(atlast-crypto VERSION 0.0.1)
# use this to generate file list: 
#  ls ./wrap_crypto/wrap_*.c | sort | uniq | sed -e 's_\./_"_' |  sed -e 's_$_"_'
add_executable(${PROJECT_NAME}
    main.c
    "atl_extensions/extensions_atl.c"

    # "atl_primitives/aes_wrap.c"
    # "atl_primitives/base32_wrap.c"
    # "atl_primitives/base58_wrap.c"
    # "atl_primitives/bignum_wrap.c"
    # "atl_primitives/bip32_wrap.c"
    # "atl_primitives/bip39_wrap.c"
    # "atl_primitives/ecdsa_wrap.c"
    # "atl_primitives/hasher_wrap.c"
    # "atl_primitives/hmac_drbg_wrap.c"
    # "atl_primitives/hmac_wrap.c"
    # "atl_primitives/sha2_wrap.c"
    # "atl_primitives/sha3_wrap.c"
    # "atl_primitives/slip39_wrap.c"
    
    # "atl_common/common_atl.c"

    # //crypto
    # "wrap_crypto/wrap_aes.c"
    # "wrap_crypto/wrap_base32.c"
    # # "wrap_crypto/wrap_bignum.c"
    # "wrap_crypto/wrap_bip32.c"
    # "wrap_crypto/wrap_bip39.c"
    # "wrap_crypto/wrap_ecdsa.c"
    # "wrap_crypto/wrap_hasher.c"
    # "wrap_crypto/wrap_hmac.c"
    # "wrap_crypto/wrap_hmac_drbg.c"
    # "wrap_crypto/wrap_sha2.c"
    # "wrap_crypto/wrap_sha3.c"
    # "wrap_crypto/wrap_slip39.c"

    # //wallycore
    #  ls ./wrap_wallycore*.c | sort | uniq | sed -e 's_\./_"_' |  sed -e 's_$_"_'
    "wrap_wallycore/wrap_wally_address.c"
    "wrap_wallycore/wrap_wally_bip32.c"
    "wrap_wallycore/wrap_wally_bip38.c"
    "wrap_wallycore/wrap_wally_bip39.c"
    "wrap_wallycore/wrap_wally_core.c"
    "wrap_wallycore/wrap_wally_crypto.c"
    "wrap_wallycore/wrap_wally_transaction.c"


    # "wrap_secp256k1/wrap_secp256k1.c"


)

target_link_libraries(${PROJECT_NAME} atlast secp256k1 wallycore m)

# -g -Wall -DMEMSTAT -DALIGNMENT -DEXPORT -DREADONLYSTRINGS
add_definitions(-g -Wall -DMEMSTAT -DALIGNMENT -DEXPORT -DREADONLYSTRINGS -DNOMEMCHECK)
# -DNOMEMCHECK
include_directories("../atlast-forth/atlast-1.2")
include_directories("../wallycore/include")
# include_directories("../crypto")