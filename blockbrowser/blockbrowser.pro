TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

HEADERS += \
    src/config/aiccoin-config.h \
    src/rpc/client.h \
    src/rpc/protocol.h \
    src/support/events.h \
    src/univalue/include/univalue.h \
    src/univalue/lib/univalue_escapes.h \
    src/univalue/lib/univalue_utffilter.h \
    src/aiccoin_cli.h \
    src/chainparamsbase.h \
    src/clientversion.h \
    src/config.h \
    src/fs.h \
    src/logging.h \
    src/sync.h \
    src/threadsafety.h \
    src/tinyformat.h \
    src/util.h \
    src/utilmemory.h \
    src/utilstrencodings.h \
    src/utiltime.h \
    config.h

SOURCES += \
    src/libaiccoin_cli/main.cpp \
    src/rpc/client.cpp \
    src/rpc/protocol.cpp \
    src/univalue/lib/univalue.cpp \
    src/univalue/lib/univalue_get.cpp \
    src/univalue/lib/univalue_read.cpp \
    src/univalue/lib/univalue_write.cpp \
    src/aiccoin-cli.cpp \
    src/chainparamsbase.cpp \
    src/clientversion.cpp \
    src/fs.cpp \
    src/logging.cpp \
    src/util.cpp \
    src/utilstrencodings.cpp \
    src/utiltime.cpp
