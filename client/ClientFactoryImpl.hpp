//
// Created by Pop Richards on 28/12/20.
//

#ifndef RECEIVER_LOGGER_CLIENTFACTORYIMPL_HPP
#define RECEIVER_LOGGER_CLIENTFACTORYIMPL_HPP

#include "ClientFactory.hpp"
#include "ZmqClient.hpp"
#include <iostream>

class ClientFactoryImpl {
private:
    ClientFactoryImpl();
    inline static ClientFactoryImpl * instance;
public:
    static ClientFactoryImpl * GetClientFactoryInstance();

    ClientFactory * CreateClient(std::string clientType);

};


#endif //RECEIVER_LOGGER_CLIENTFACTORYIMPL_HPP
