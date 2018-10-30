#include<iostream>
#include"../aiccoin_cli.h"
#include<string.h>
#include<limits.h>
using namespace std;

#define GENERATE 1
#define GETBLOCKCHAININFO 0
#define GETBLOCKHASH 0
#define GETBALENCE 0
#define SENDTOADDRESS 0


int main()
{
    UniValue result;
#if GENERATE
    //char* argv[argc] = {"./aiccoin-cli", "-rpcwallet", "-rpcuser=peng", "-rpcpassword=pfzh1990", "-rpcconnect=192.168.20.204",  "generate", "1"};
    int argc = 7;
    char* argv[argc];
    *(argv+0)=new char[64];
    *(argv+1) = new char[64];
    *(argv+2)=new char[64];
    *(argv+3) = new char[64];
    *(argv+4)=new char[64];
    *(argv+5)=new char[64];
    *(argv+6)=new char[64];

    memcpy(*(argv+0),"./aiccoin-cli",sizeof("./aiccoin-cli"));
    memcpy(*(argv+1),"-rpcwallet",sizeof("-rpcwallet"));
    memcpy(*(argv+2),"-rpcuser=peng",sizeof("-rpcuser=peng"));
    memcpy(*(argv+3),"-rpcpassword=pfzh1990",sizeof("-rpcpassword=pfzh1990"));
    memcpy(*(argv+4),"-rpcconnect=192.168.20.204",sizeof("-rpcconnect=192.168.20.204"));
    memcpy(*(argv+5),"generate",sizeof("generate"));
    memcpy(*(argv+6),"1",sizeof("1"));

    while(1)
    {
        aiccoin_cli(argc,argv,result);
    }
#endif

#if GETBLOCKCHAININFO
    //char* argv[argc] = {"./aiccoin-cli", "-rpcwallet", "-rpcuser=peng", "-rpcpassword=pfzh1990", "-rpcconnect=192.168.20.204",  "getblockchaininfo"};
    int argc = 6;
    char* argv[argc];
    *(argv+0)=new char[64];
    *(argv+1) = new char[64];
    *(argv+2)=new char[64];
    *(argv+3) = new char[64];
    *(argv+4)=new char[64];
    *(argv+5)=new char[64];

    memcpy(*(argv+0),"./aiccoin-cli",sizeof("./aiccoin-cli"));
    memcpy(*(argv+1),"-rpcwallet",sizeof("-rpcwallet"));
    memcpy(*(argv+2),"-rpcuser=peng",sizeof("-rpcuser=peng"));
    memcpy(*(argv+3),"-rpcpassword=pfzh1990",sizeof("-rpcpassword=pfzh1990"));
    memcpy(*(argv+4),"-rpcconnect=192.168.20.204",sizeof("-rpcconnect=192.168.20.204"));
    memcpy(*(argv+5),"getblockchaininfo",sizeof("getblockchaininfo"));
    while(1)
    {
        aiccoin_cli(argc,argv,result);
    }
#endif

#if GETBLOCKHASH
    //char* argv[argc] = {"./aiccoin-cli", "-rpcwallet", "-rpcuser=peng", "-rpcpassword=pfzh1990", "-rpcconnect=192.168.20.204",  "getblockhash","1"};
    int argc = 7;
    char* argv[argc];
    *(argv+0)=new char[64];
    *(argv+1) = new char[64];
    *(argv+2)=new char[64];
    *(argv+3) = new char[64];
    *(argv+4)=new char[64];
    *(argv+5)=new char[64];
    *(argv+6)=new char[64];

    memcpy(*(argv+0),"./aiccoin-cli",sizeof("./aiccoin-cli"));
    memcpy(*(argv+1),"-rpcwallet",sizeof("-rpcwallet"));
    memcpy(*(argv+2),"-rpcuser=peng",sizeof("-rpcuser=peng"));
    memcpy(*(argv+3),"-rpcpassword=pfzh1990",sizeof("-rpcpassword=pfzh1990"));
    memcpy(*(argv+4),"-rpcconnect=192.168.20.204",sizeof("-rpcconnect=192.168.20.204"));
    memcpy(*(argv+5),"getblockhash",sizeof("getblockhash"));
    memcpy(*(argv+6),"1",sizeof("1"));
    while(1)
    {
        aiccoin_cli(argc,argv,result);
    }
#endif

#if GETBALENCE
    //char* argv[argc] = {"./aiccoin-cli", "-rpcwallet", "-rpcuser=peng", "-rpcpassword=pfzh1990", "-rpcconnect=192.168.20.204",  "getbalance"};
    int argc = 6;
    char* argv[argc];
    *(argv+0)=new char[64];
    *(argv+1) = new char[64];
    *(argv+2)=new char[64];
    *(argv+3) = new char[64];
    *(argv+4)=new char[64];
    *(argv+5)=new char[64];

    memcpy(*(argv+0),"./aiccoin-cli",sizeof("./aiccoin-cli"));
    memcpy(*(argv+1),"-rpcwallet",sizeof("-rpcwallet"));
    memcpy(*(argv+2),"-rpcuser=peng",sizeof("-rpcuser=peng"));
    memcpy(*(argv+3),"-rpcpassword=pfzh1990",sizeof("-rpcpassword=pfzh1990"));
    memcpy(*(argv+4),"-rpcconnect=192.168.20.204",sizeof("-rpcconnect=192.168.20.204"));
    memcpy(*(argv+5),"getbalance",sizeof("getbalance"));
    while(1)
    {
        aiccoin_cli(argc,argv,result);
    }
#endif

#if GETBLOCKHASH
    //char* argv[argc] = {"./aiccoin-cli", "-rpcwallet", "-rpcuser=peng", "-rpcpassword=pfzh1990", "-rpcconnect=192.168.20.204",  "getblockhash","1"};
    int argc = 7;
    char* argv[argc];
    *(argv+0)=new char[64];
    *(argv+1) = new char[64];
    *(argv+2)=new char[64];
    *(argv+3) = new char[64];
    *(argv+4)=new char[64];
    *(argv+5)=new char[64];
    *(argv+6)=new char[64];

    memcpy(*(argv+0),"./aiccoin-cli",sizeof("./aiccoin-cli"));
    memcpy(*(argv+1),"-rpcwallet",sizeof("-rpcwallet"));
    memcpy(*(argv+2),"-rpcuser=peng",sizeof("-rpcuser=peng"));
    memcpy(*(argv+3),"-rpcpassword=pfzh1990",sizeof("-rpcpassword=pfzh1990"));
    memcpy(*(argv+4),"-rpcconnect=192.168.20.204",sizeof("-rpcconnect=192.168.20.204"));
    memcpy(*(argv+5),"getblockhash",sizeof("getblockhash"));
    memcpy(*(argv+6),"1",sizeof("1"));
    while(1)
    {
        aiccoin_cli(argc,argv,result);
    }
#endif

#if SENDTOADDRESS
    //char* argv[argc] = {"./aiccoin-cli", "-rpcwallet", "-rpcuser=peng", "-rpcpassword=pfzh1990", "-rpcconnect=192.168.20.204",  "sendtoaddress","1"};
    int argc = 7;
    char* argv[argc];
    *(argv+0)=new char[64];
    *(argv+1) = new char[64];
    *(argv+2)=new char[64];
    *(argv+3) = new char[64];
    *(argv+4)=new char[64];
    *(argv+5)=new char[64];
    *(argv+6)=new char[64];

    memcpy(*(argv+0),"./aiccoin-cli",sizeof("./aiccoin-cli"));
    memcpy(*(argv+1),"-rpcwallet",sizeof("-rpcwallet"));
    memcpy(*(argv+2),"-rpcuser=peng",sizeof("-rpcuser=peng"));
    memcpy(*(argv+3),"-rpcpassword=pfzh1990",sizeof("-rpcpassword=pfzh1990"));
    memcpy(*(argv+4),"-rpcconnect=192.168.20.204",sizeof("-rpcconnect=192.168.20.204"));
    memcpy(*(argv+5),"sendtoaddress",sizeof("sendtoaddress"));
    memcpy(*(argv+6),"1",sizeof("1"));
    while(1)
    {
        aiccoin_cli(argc,argv,result);
    }
#endif


	return 0;
}

