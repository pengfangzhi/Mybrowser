TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

HEADERS += \
    compat/byteswap.h \
    compat/endian.h \
    consensus/merkle.h \
    crypto/common.h \
    crypto/hmac_sha256.h \
    crypto/hmac_sha512.h \
    crypto/ripemd160.h \
    crypto/sha1.h \
    crypto/sha256.h \
    crypto/sha512.h \
    primitives/block.h \
    primitives/transaction.h \
    script/script.h \
    amount.h \
    arith_uint256.h \
    compat.h \
    hash.h \
    prevector.h \
    serialize.h \
    span.h \
    tinyformat.h \
    uint256.h \
    utilstrencodings.h \
    version.h

SOURCES += \
    consensus/merkle.cpp \
    crypto/hmac_sha256.cpp \
    crypto/hmac_sha512.cpp \
    crypto/ripemd160.cpp \
    crypto/sha256.cpp \
    crypto/sha512.cpp \
    primitives/block.cpp \
    primitives/transaction.cpp \
    script/script.cpp \
    arith_uint256.cpp \
    hash.cpp \
    main.cpp \
    uint256.cpp \
    utilstrencodings.cpp

