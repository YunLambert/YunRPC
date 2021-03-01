#include "yunrpccontroller.h"

YunrpcController::YunrpcController() {
    m_failed = false;
    m_errText = "";
}

void YunrpcController::Reset() {
    m_failed = false;
    m_errText = "";
}

bool YunrpcController::Failed() const {
    return m_failed;
}

std::string YunrpcController::ErrorText() const {
    return m_errText;
}

void YunrpcController::SetFailed(const std::string& reason) {
    m_failed = true;
    m_errText = reason;
}

// 目前未实现具体的功能
void YunrpcController::StartCancel(){}
bool YunrpcController::IsCanceled() const {return false;}
void YunrpcController::NotifyOnCancel(google::protobuf::Closure* callback) {}