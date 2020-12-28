//
// Created by Pop Richards on 28/12/20.
//

#include "ClientFactoryImpl.hpp"

ClientFactoryImpl::ClientFactoryImpl() {
    std::cout << "Client Factory Impl Created" << std::endl;
}

ClientFactoryImpl * ClientFactoryImpl::GetClientFactoryInstance() {
    if (!instance)
        instance = new ClientFactoryImpl();
    std::cout << "ClientFactoryImpl instance returned" << std::endl;
    return instance;
}

ClientFactory * ClientFactoryImpl::CreateClient(std::string clientType) {
    if (clientType == "zmq") {
        return new ZMQClient();
    } else {
        std::cout << "Error: undefined client type " << clientType << std::endl;
    }
    return nullptr;
}