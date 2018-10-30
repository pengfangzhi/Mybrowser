#ifndef CHAINPARAMSBASE_H
#define CHAINPARAMSBASE_H

#include <memory>
#include <string>
#include <vector>


class CBaseChainParams
{
public:
    /** BIP70 chain name strings (main, test or regtest) */
    static const std::string MAIN;
    static const std::string TESTNET;
    static const std::string REGTEST;

    const std::string& DataDir() const { return strDataDir; }
    int RPCPort() const { return nRPCPort; }

    CBaseChainParams() = delete;
    CBaseChainParams(const std::string& data_dir, int rpc_port) : nRPCPort(rpc_port), strDataDir(data_dir) {}

private:
    int nRPCPort;
    std::string strDataDir;
};



std::unique_ptr<CBaseChainParams> CreateBaseChainParams(const std::string& chain);

void SetupChainParamsBaseOptions();

const CBaseChainParams& BaseParams();

void SelectBaseParams(const std::string& chain);

#endif // CHAINPARAMSBASE_H
