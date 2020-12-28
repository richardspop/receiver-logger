//
// Created by Pop Richards on 28/12/20.
//

#ifndef RECEIVER_LOGGER_CLIENTFACTORY_HPP
#define RECEIVER_LOGGER_CLIENTFACTORY_HPP

#include <string>
#include "../writer/WriterFactory.hpp"

class ClientFactory {
public:
    virtual void Request(std::string serverAddress, int statCollectionTimer, WriterFactory * writer) = 0;

};


#endif //RECEIVER_LOGGER_CLIENTFACTORY_HPP
