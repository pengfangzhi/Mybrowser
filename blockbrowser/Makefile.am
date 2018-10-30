AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES=libaiccoin_cli.la

#BOOST_CPPFLAGS = -DBOOST_SP_USE_STD_ATOMIC -DBOOST_AC_USE_STD_ATOMIC -pthread -I/usr/include
#BOOST_LIBS = -L/usr/lib/x86_64-linux-gnu -lboost_system -lboost_filesystem -lboost_thread -lboost_chrono
#
#EVENT_CFLAGS = -I/usr/local/include
#EVENT_LIBS = -L/usr/local/lib -levent
#EVENT_PTHREADS_CFLAGS = -pthread -I/usr/local/include
#EVENT_PTHREADS_LIBS = -L/usr/local/lib -levent_pthreads -levent

AICCOIN_COMMEN_H = \
src/config/aiccoin-config.h\
src/rpc/client.h \
src/rpc/protocol.h \
src/support/events.h \
src/univalue/include/univalue.h \
src/chainparamsbase.h \
src/clientversion.h \
src/fs.h \
src/logging.h \
src/sync.h \
src/threadsafety.h \
src/tinyformat.h \
src/util.h \
src/utilmemory.h \
src/utilstrencodings.h \
src/utiltime.h \
src/univalue/lib/univalue_escapes.h \
src/univalue/lib/univalue_utffilter.h

libaiccoin_cli_la_CXXFLAGS = -I./src -I./src/univalue/include -I./usr/include


libaiccoin_cli_la_SOURCES=\
src/aiccoin-cli.cpp \
src/rpc/client.cpp \
src/rpc/protocol.cpp \
src/univalue/lib/univalue.cpp \
src/univalue/lib/univalue_get.cpp \
src/univalue/lib/univalue_read.cpp \
src/univalue/lib/univalue_write.cpp \
src/chainparamsbase.cpp \
src/clientversion.cpp \
src/fs.cpp\
src/util.cpp \
src/utilstrencodings.cpp \
src/utiltime.cpp \
src/logging.cpp \
$(AICCOIN_COMMEN_H)

#libaiccoin_cli_la_LIBFLAGS =

libaiccoin_cli_la_LIBADD= \
$(BOOST_LIBS)\
$(EVENT_LIBS)






