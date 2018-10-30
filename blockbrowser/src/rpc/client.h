#ifndef CLIENT_H
#define CLIENT_H

#include <univalue.h>

UniValue RPCConvertValues(const std::string& strMethod, const std::vector<std::string>& strParams);

UniValue RPCConvertNamedValues(const std::string &strMethod, const std::vector<std::string> &strParams);

UniValue ParseNonRFCJSONValue(const std::string& strVal);


#endif // CLIENT_H
