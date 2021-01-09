# Atlast-Forth bindings to libwally and Trezor crypto wallet routines.

Why Atlast Forth ? Forth is the smallest possible Virtual Machine, stack-based programming language and operating system All-In-One that can run on cheap microcontrollers.
Micropython is a arguably a better language (check Trezor's opensource hardware wallet implementation), but it's GC and bells and whistles come with a performance and integration complexity penalty.
Atlast Forth is a rock solid Forth implementation that consists of a single source file (plus a header file) in plain c, and can be embedded in anything.
Crypto wallet running on a toaster ? All it takes is a 50 cent microcontroller.

This is a playground project and a constant WIP with Absolutely no warranty, use it for fun at your own risk.

# ---

200 string mnemonic
256 MNEMONIC_GENERATE
mnemonic s!

20 string passphrase
"Pas$0rd" passphrase s!

variable seed
64 allot

mnemonic passphrase seed 0 mnemonic_to_seed

variable hdnode
150 allot

seed 64 "secp256k1" hdnode hdnode_from_seed
drop

0x0488b21e constant version_public 
0x0488ade4 constant version_private
0x00 constant addr_version
0x80 constant wif_version
128 constant buflen
variable buf
buflen 1+ allot
variable fingerprint

1 constant chain

variable node
150 allot

node hdnode 150 memcpy

node 44 0x80000000 or hdnode_private_ckd
node 0 0x80000000 or hdnode_private_ckd \bitcoin
node 1 1 - 0x80000000 or hdnode_private_ckd

node hdnode_fingerprint fingerprint !

128 string xpriv
128 string xpub

node fingerprint @ version_private buf buflen hdnode_serialize_private
buf xpriv s!

node fingerprint version_public buf buflen hdnode_serialize_public
buf xpub s!

node chain hdnode_private_ckd 

1 constant ii
variable node2
150 allot

node2 node 150 memcpy

node2 ii hdnode_private_ckd

node2 hdnode_fill_public_key

\\\\\\\\\\\\

node2 HDN>PUBKEY addr_version buf buflen ecdsa_get_address

\\\

ecdsa_get_address(node2.public_key, addr_version, buf, buflen); QString address = QString(buf);

\\\
node2 HDN>PUBKEY wif_version buf buflen ecdsa_get_wif 

ecdsa_get_wif(node2.private_key, wif_version, buf, buflen); QString wif = QString(buf);
list->setItem(i, 0, new QTableWidgetItem(address));
list->setItem(i, 1, new QTableWidgetItem(wif));
list->setItem(i, 2, new QTableWidgetItem("0.0"));


