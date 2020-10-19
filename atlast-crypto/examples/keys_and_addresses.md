
0 WALLY_INIT
DROP

variable root 
160 allot

variable rnd
32 4 * allot

variable phrase

0 rnd 32 phrase  bip39_mnemonic_from_bytes
drop

variable seed
65 allot

variable len

phrase "my passord" seed 64 len bip39_mnemonic_to_seed
drop

seed 64 0x04358394 0 root bip32_key_from_seed
drop

variable xprv

0x0 constant BIP32_FLAG_KEY_PRIVATE 
0x1 constant BIP32_FLAG_KEY_PUBLIC

root BIP32_FLAG_KEY_PRIVATE xprv bip32_key_to_base58
drop

variable account 
160 allot

variable path
4 3 * allot

0x80000000 constant BIP32_INITIAL_HARDENED_CHILD

BIP32_INITIAL_HARDENED_CHILD 84 + path !
BIP32_INITIAL_HARDENED_CHILD 1 + path 1 + !
BIP32_INITIAL_HARDENED_CHILD path 2 + !

root path 3 BIP32_FLAG_KEY_PRIVATE account bip32_key_from_parent_path
drop 

variable accxprv
account BIP32_FLAG_KEY_PRIVATE accxprv bip32_key_to_base58
drop

variable accxpub
account BIP32_FLAG_KEY_PUBLIC accxpub bip32_key_to_base58
drop

variable first_recv 
160 allot
variable recv_path
4 allot
0 first_recv !
0 first_recv 1 + !

account recv_path 2 BIP32_FLAG_KEY_PUBLIC first_recv bip32_key_from_parent_path
drop

0x01 constant WALLY_ADDRESS_TYPE_P2PKH 
0x02 constant WALLY_ADDRESS_TYPE_P2SH_P2WPKH
0x6F constant WALLY_ADDRESS_VERSION_P2PKH_TESTNET 
0xC4 constant WALLY_ADDRESS_VERSION_P2SH_TESTNET  
0x05 constant WALLY_ADDRESS_VERSION_P2SH_MAINNET 

variable segwit_addr
first_recv "tb" 0 segwit_addr wally_bip32_key_to_addr_segwit

variable segwit_nested_addr
first_recv WALLY_ADDRESS_TYPE_P2SH_P2WPKH WALLY_ADDRESS_VERSION_P2SH_TESTNET segwit_nested_addr wally_bip32_key_to_address
drop

variable legacy_addr
first_recv WALLY_ADDRESS_TYPE_P2PKH WALLY_ADDRESS_VERSION_P2PKH_TESTNET legacy_addr wally_bip32_key_to_address
drop


