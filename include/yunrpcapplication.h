#pragma once

#include "yunrpcconfig.h"
#include "yunrpcchannel.h"
#include "yunrpccontroller.h"

// yunrpc框架的基础类，负责框架的一些初始化操作
class YunrpcApplication {
public:
    static void Init(int argc, char **argv);
    static YunrpcApplication& GetInstance();
    static YunrpcConfig& GetConfig();
private:
    static YunrpcConfig m_config;

    YunrpcApplication(){}
    YunrpcApplication(const YunrpcApplication&) = delete;
    YunrpcApplication(YunrpcApplication&&) = delete;
};