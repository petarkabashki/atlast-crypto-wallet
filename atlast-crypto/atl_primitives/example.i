/* File : example.i */
%module example

%{
#include "../../crypto/ecdsa.h"
%}

/* Let's just grab the original header file here */
%include "../../crypto/ecdsa.h"

/* Now instantiate some specific template declarations */



