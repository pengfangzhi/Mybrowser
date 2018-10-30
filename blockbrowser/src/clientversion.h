#ifndef CLIENTVERSOIN_H
#define CLIENTVERSOIN_H

#include <config/aiccoin-config.h>

#include <string>
#include <vector>

#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

extern const std::string CLIENT_BUILD;

std::string FormatFullVersion();

#endif // CLIENTVERSOIN_H
